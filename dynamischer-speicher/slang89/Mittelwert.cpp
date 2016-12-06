#include <iostream>
#include <math.h>

using namespace std;

double EingabeMittelwert(int *pAi, int Laenge);

int main()
{
	int iAnzahl = 0;
	int *pFeld = NULL;
	double MittelWert = 0;

	cout << "\nAnzahl der Werte:";
	cin >> iAnzahl;
	cout << "\n==============================================================================\n\n";
	cout << "Geben Sie die Werte ein: "<<endl;
	
	pFeld = new int[iAnzahl];
	MittelWert = EingabeMittelwert(pFeld, iAnzahl);
	cout << "Mittelwert: " << MittelWert;
	
	delete[] pFeld;
	
	return 0;
}

double EingabeMittelwert(int *pAi, int Laenge)
{
	int iSumme = 0;
	double MittelWert = 0;
	for (int i = 0;i < Laenge;i++){
		
		cout << i+1 << ". Wert"<< ": ";
		cin >> pAi[i];

	}
	for (int i = 0;i < Laenge;i++){
		iSumme = iSumme + *(pAi + i);
	}
	MittelWert =(double)iSumme / Laenge;
	
	return MittelWert;
}
