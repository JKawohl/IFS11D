#include <iostream>
#include "../custom.h"

double eingabeMittelwert(int * pInt, int);

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
	double mittelwert=eingabeMittelwert(pInt, iAnzahl);
	cout << "Mittelwert: " << mittelwert << endl;
}


double eingabeMittelwert(int * pInt, int iMax){
	using namespace std;
	int iGesamt=0;
	cout << "Werte eingeben\n";
	for(int i=0; i<iMax; i++){
		cin >> pInt[i];
		iGesamt+=pInt[i];
	}
	double mittelwert=iGesamt/(double)iMax;
	return mittelwert;
}
