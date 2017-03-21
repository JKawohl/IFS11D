// Würfelspiel.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <iostream>
#include <string>
// Systemtime für Randomizer 
#include <time.h>

using namespace std;

int main()

{
	int aiZmZ[10] = { 0 };
	int wieoft[7] = { 0 };
	// randomizer anwerfen
	srand((unsigned)time(NULL));

	//Wnr = Wurfnummer (10mal)

	for ( int Wnr = 0; Wnr <= 9; Wnr++)
	{
		aiZmZ[Wnr]= rand() %6 + 1;


		wieoft[aiZmZ[Wnr]]++;

		cout << aiZmZ[Wnr] << " ";	
	}

	// Zaehler zählt
	cout << "\n";
	for (int Zaehler = 1; Zaehler <= 6; Zaehler++)
	{
		cout << endl;
		cout << " Zahl:" << Zaehler << " wurde " << wieoft[Zaehler] << " mal gewuerfelt" << endl;
	 }

	 
	getchar();
	return 0;
	
}

