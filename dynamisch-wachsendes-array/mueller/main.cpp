#include <iostream>

void printSame(int anzahl, char sign, int newline);

void printSame(int anzahl, char sign, int newline) {
	for(int i = 0; i < anzahl; i++) {
		std::cout << sign;
	}
	for(int i = 0; i < newline; i++) {
		std::cout << std::endl;
	}
}

void eingabeWerte(int *, int);
double getAvg(int *, int);
int getMax(int * pInt, int iMax);
int getMin(int * pInt, int iMax);

int main() {
	using namespace std;

	printSame(50, '=', 1);
	cout << "\t\tDynamischer Speicher\n";
	printSame(50, '=', 2);
	cout << "Geben Sie die Werte ein. \"0\" um zu beenden.\n";

	int iAnzahl = 0;
	int * pZeigerNeu;
	int * pZeigerAlt;
	int temp;
	do {
		cin >> temp;
		iAnzahl++;
		pZeigerNeu = new int[iAnzahl];
		pZeigerNeu[iAnzahl - 1] = temp;
		for(int i = 0; i < iAnzahl - 1; i++) {
			pZeigerNeu[i] = pZeigerAlt[i];
		}
		if(iAnzahl > 1) {
			delete[] pZeigerAlt;
		}
		pZeigerAlt = pZeigerNeu;

	} while (temp != 0);
	if(iAnzahl != 1) {
		double mittelwert = getAvg(pZeigerNeu, iAnzahl - 1);
		cout << "Mittelwert: " << mittelwert << endl;
		cout << "Minimum: " << getMin(pZeigerNeu, iAnzahl - 1) << endl;
		cout << "Maximum: " << getMax(pZeigerNeu, iAnzahl - 1) << endl;
	}
}

void eingabeWerte(int * pInt, int iMax) {
	using namespace std;
	cout << "Werte eingeben\n";
	for(int i = 0; i < iMax; i++) {
		cin >> pInt[i];
	}
}

double getAvg(int * pInt, int iMax) {
	using namespace std;
	int iGesamt = 0;
	for(int i = 0; i < iMax; i++) {
		iGesamt += pInt[i];
	}
	double mittelwert = iGesamt / (double)iMax;
	return mittelwert;
}

int getMax(int * pInt, int iMax) {
	using namespace std;
	int iMaxValue = 0;
	for(int i = 0; i < iMax; i++) {
		if(pInt[i] > iMaxValue) {
			iMaxValue = pInt[i];
		}
	}
	return iMaxValue;
}

int getMin(int * pInt, int iMax) {
	using namespace std;
	int iMinValue = pInt[0];
	for(int i = 1; i < iMax; i++) {
		if(pInt[i] < iMinValue) {
			iMinValue = pInt[i];
		}
	}
	return iMinValue;
}
