#include <iostream>

void printSame(int anzahl, char sign, int newline);

void printSame(int anzahl, char sign, int newline){
	for(int i=0; i<anzahl; i++){
		std::cout << sign;
	}
	for(int i=0; i<newline; i++){
		std::cout << std::endl;
	}
}

void eingabeWerte(int *, int);
double getAvg(int *, int);
int getMax(int * pInt, int iMax);
int getMin(int * pInt, int iMax);

int main(){
	using namespace std;

	printSame(50,'=',1);
	cout << "\t\tDynamischer Speicher\n";
	printSame(50,'=',2);
	cout << "Anzahl der Werte\n";
	int iAnzahl;
	cin >> iAnzahl;
	int * pInt;
	pInt=new int[iAnzahl];
	eingabeWerte(pInt, iAnzahl);
	double mittelwert=getAvg(pInt, iAnzahl);
	cout << "Mittelwert: " << mittelwert << endl;
	cout << "Minimum: " << getMin(pInt, iAnzahl) << endl;
	cout << "Maximum: " << getMax(pInt, iAnzahl) << endl;
	delete[] pInt;
}

void eingabeWerte(int * pInt, int iMax){
	using namespace std;
	cout << "Werte eingeben\n";
	for(int i=0; i<iMax; i++){
		cin >> pInt[i];
	}
}

double getAvg(int * pInt, int iMax){
	using namespace std;
	int iGesamt=0;
	for(int i=0; i<iMax; i++){
		iGesamt+=pInt[i];
	}
	double mittelwert=iGesamt/(double)iMax;
	return mittelwert;
}

int getMax(int * pInt, int iMax){
	using namespace std;
	int iMaxValue=0;
	for(int i=0; i<iMax; i++){
		if(pInt[i]>iMaxValue){
			iMaxValue=pInt[i];
		}
	}
	return iMaxValue;
}

int getMin(int * pInt, int iMax){
	using namespace std;
	int iMinValue=pInt[0];
	for(int i=1; i<iMax; i++){
		if(pInt[i]<iMinValue){
			iMinValue=pInt[i];
		}
	}
	return iMinValue;
}
