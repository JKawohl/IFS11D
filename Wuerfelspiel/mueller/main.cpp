// TODO: remove hardcoded limits
#include <iostream>
#include <time.h>

#define randomize() (srand((unsigned)time(NULL)))

// Do not changed or you break everything
static int ANZAHL_WUERFE = 10;
static int ANZAHL_SPIELER = 10;

int main() {
	using namespace std;
	randomize();

	cout << "=======================================================" << endl;
	cout << "                    Das Würfelspiel" << endl;
	cout << "=======================================================" << endl << endl;

	// Array mit Ergebnissen
	unsigned int aiZMZ[ANZAHL_WUERFE][ANZAHL_SPIELER] = {0};
	// Array mit Anzahl der Augen
	//unsigned int aiAnzahl[6][ANZAHL_SPIELER] = {0};
	unsigned int aiAnzahl[6][11] = {0};

	for(int Spieler = 0; Spieler < ANZAHL_SPIELER; Spieler++) {
		cout << "Spieler " << Spieler + 1 << ":\t";
		for(int WNr = 0; WNr < ANZAHL_WUERFE; WNr++) {
			int wurf = rand() % 6 + 1;
			cout << wurf << " ";
			aiZMZ[WNr][Spieler] = wurf;
			//cout << aiAnzahl[wurf-1][Spieler] << " ";
			aiAnzahl[wurf - 1][Spieler] += 1;
			aiAnzahl[wurf - 1][10] += 1;
			//cout << aiZMZ[WNr][Spieler] << " ";
			//cout << aiAnzahl[wurf-1][Spieler] << " ";
		}
		cout << endl;
	}

	cout << endl;

	float afProzent[6][ANZAHL_SPIELER + 1] = {{0, 0}, {0, 0}};
	for(int Spieler = 0; Spieler <= ANZAHL_SPIELER; Spieler++) {
		for(int WNr = 0; WNr < 6; WNr++) {
			float f = ANZAHL_WUERFE;
			if(Spieler == 11) {
				float f = (ANZAHL_WUERFE * ANZAHL_SPIELER);
			}
			afProzent[WNr][Spieler] = aiAnzahl[WNr][Spieler] / f * 10;
		}
	}

	for(int Spieler = 0; Spieler <= ANZAHL_SPIELER; Spieler++) {
		if(Spieler == 10) {
			cout << "\nGesamt" << ":\n";
		} else {
			cout << "\nSpieler " << Spieler + 1 << ":\n";
		}
		for (int WNr = 0; WNr < 6; WNr++) {
			cout << "Anzahl " << WNr + 1 << ": " << aiAnzahl[WNr][Spieler] << "\tProzent: " << afProzent[WNr][Spieler] << "%" << endl;
		}
	}

	return 0;
}
