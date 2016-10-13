#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	int iWurf;
	int iZaehler;
	int iZahl = 0;
	int iSumme = 0;
	int iAnzahleinser = 0, iAnzahlzweier = 0, iAnzahldreier = 0, iAnzahlvierer = 0, iAnzahlfuenfer = 0, iAnzahlsechser = 0;



	for (iZaehler = 0; iZaehler< 10; iZaehler++)
	{
		iWurf = 1 + (rand() % 6);
		cout << "\nDer " << iZaehler << ". Wurf : " << iWurf << endl;

		cout << endl;
		switch (iWurf)
		{

		case 1: iAnzahleinser++;
			break;
		case 2: iAnzahlzweier++;
			break;
		case 3: iAnzahldreier++;
			break;
		case 4: iAnzahlvierer++;
			break;
		case 5: iAnzahlfuenfer++;
			break;
		case 6: iAnzahlsechser++;
			break;
		default: cout << "falsch";
		}
	}

	cout << endl;
	cout << endl;

	cout << endl;
	cout << endl;

	cout << "fuer Ueberpruefung der Haufigkeit der Zahlen waehlen Sie: 1, 2, 3, 4, 5 oder 6: \n";
	cin >> iZahl;
	cout << endl;

	switch (iZahl)

	{

	case 1:
		cout << "die Haufigkeit des Wuerfels 1 betraegt: " << iAnzahleinser;
		break;

	case 2:   iAnzahlzweier;
		cout << "die Haufigkeit des Wuerfels 2 betraegt: " << iAnzahlzweier;
		break;

	case 3:   iAnzahldreier;
		cout << "die Haufigkeit des Wuerfels 3 betraegt: " << iAnzahldreier;
		break;

	case 4:   iAnzahlvierer;
		cout << "die Haufigkeit des Wuerfels 4 betraegt: " << iAnzahlvierer;
		break;

	case 5:   iAnzahlfuenfer;
		cout << "die Haufigkeit des Wuerfels 5 betraegt: " << iAnzahlfuenfer;
		break;

	case 6:   iAnzahlsechser;
		cout << "die Haufigkeit des Wuerfels 6 betraegt: " << iAnzahlsechser;
		break;

	default:   cout << "falscher Wurf ";

		break;
		cout << endl;
		getchar();
	}
	getchar();
	getchar();
	return 0;
}
