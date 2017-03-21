// W�rfelspiel.cpp : Definiert den Einstiegspunkt f�r die Konsolenanwendung.
//

#include <iostream>
#include <string>
// Systemtime f�r Randomizer 
#include <time.h>

using namespace std;

int main()

{	// Array f�r Anzahl Spieler und W�rfe 
	int aiZmZ[8][10] = { 0 };
	// Array f�r geworfene Zahlen
	int wieoft[7] = { 0 };
	
	
	// randomizer anwerfen
	srand((unsigned)time(NULL));


	//Wnr = Wurfnummer (10mal)
	for (int m = 0; m<8; m++)
	for (int Wnr = 0; Wnr <= 9; Wnr++)
	{
		aiZmZ[m][Wnr] = rand() % 6 + 1;// W�rfeln


		wieoft[aiZmZ [m][Wnr]]++; // wieoft

		cout << aiZmZ[m][Wnr] << " ";
	}

	// Zaehler z�hlt
	cout << "\n";
	for (int Zaehler = 1; Zaehler <= 6; Zaehler++)
	{
		cout << endl;
		cout << " Zahl:" << Zaehler << " wurde " << wieoft[Zaehler] << " mal gewuerfelt" << endl;
	}
	
	getchar();
	return 0;

}

