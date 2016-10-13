#include <iostream>
#include <time.h>

// Pseudo random number generator
#define randomize() (srand((unsigned)time(NULL)))

#define ANZAHL_WUERFE 10
#define ANZAHL_SPIELER 2

int main() {
	using namespace std;
	randomize();

	cout << "=======================================================" << endl;
	cout << "                    Das Würfelspiel" << endl;
	cout << "=======================================================" << endl << endl;

	// Array mit Ergebnissen
	unsigned int aiZMZ[ANZAHL_WUERFE][ANZAHL_SPIELER + 1] = {0};
	// Array mit Anzahl der Augen
	unsigned int aiAnzahl[6][ANZAHL_SPIELER + 1] = {0};

	// Würfeln
	for(int aktuellerSpieler = 1; aktuellerSpieler <= ANZAHL_SPIELER; aktuellerSpieler++) {
		cout << "Spieler " << aktuellerSpieler << ":\t";
		for(int WNr = 0; WNr < ANZAHL_WUERFE; WNr++) {
			// Würfeln
			int wurf = rand() % 6 + 1;
			// aktueller Wurf ausgeben
			cout << wurf << " ";
			// Augenzahl abspeichern
			aiZMZ[WNr][aktuellerSpieler] = wurf;
			// Anzahl Augenzahl für bestimmten Spieler abspeichern
			aiAnzahl[wurf - 1][aktuellerSpieler] += 1;
			// Anzahl Augenzahl für alle Spieler abspeichern
			aiAnzahl[wurf - 1][0] += 1;
		}
		cout << endl;
	}

	cout << endl;

	// Prozente für einzelne Spieler ausrechnen
	float afProzent[6][ANZAHL_SPIELER + 1] = {{0, 0}, {0, 0}};
	for(int aktuellerSpieler = 1; aktuellerSpieler <= ANZAHL_SPIELER; aktuellerSpieler++) {
		for(int WNr = 0; WNr < 6; WNr++) {
			float f = ANZAHL_WUERFE;
			afProzent[WNr][aktuellerSpieler] = (aiAnzahl[WNr][aktuellerSpieler] / f) * 100;
		}
	}

	// Prozente für alle Spieler ausrechnen
	for(int WNr = 0; WNr < 6; WNr++) {
		float f = (ANZAHL_WUERFE * ANZAHL_SPIELER);
		afProzent[WNr][0] = (aiAnzahl[WNr][0] / f) * 100;
	}

	// Prozente ausgeben
	for(int aktuellerSpieler = 0; aktuellerSpieler <= ANZAHL_SPIELER; aktuellerSpieler++) {
		if(aktuellerSpieler == 0) {
			cout << "\nGesamt" << ":\n";
		} else {
			cout << "\nSpieler " << aktuellerSpieler << ":\n";
		}
		for (int WNr = 0; WNr < 6; WNr++) {
			cout << "Anzahl " << WNr + 1 << "er: " << aiAnzahl[WNr][aktuellerSpieler] << "\tProzent: " << afProzent[WNr][aktuellerSpieler] << "%" << endl;
		}
	}
	return 0;
}
