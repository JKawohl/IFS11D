// W�rfelspiel.cpp : Definiert den Einstiegspunkt f�r die Konsolenanwendung.
//

#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main()
{
	int aiZmZ[10] = { 0 };

	int wieoft[7] = { 0 };
	// randomzizer anwerfen 

	srand((unsigned)time(NULL));

	for (int Wnr = 0; Wnr <= 9; Wnr++)
	{
		// W�rfeln
		aiZmZ[Wnr] = rand() % 6 + 1;

		wieoft[aiZmZ[Wnr]]++;

		cout << aiZmZ[Wnr] << " ";
	}

	// Zaehler z�hlt


	/*cout << "\n";
	for (int Zaehler = 1; Zaehler <= 6; Zaehler++)
	{
		cout << endl;
		cout << " Zahl:" << Zaehler << " wurde " << wieoft[Zaehler] << " mal gewuerfelt" << endl;
	}*/




	getchar();
	return 0;

}

