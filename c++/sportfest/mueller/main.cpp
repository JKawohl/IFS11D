#include <iostream>
#include <string>

#define ANZAHL_WEITSPRUNG	3
#define ANZAHL_KUGELSTOSSEN	6
#define ANZAHL_SPEERWERFEN	6
const int MAX_SPIELER = 4;

int main() {
	using namespace std;
	struct T_DISZIPLINEN {
		double weitsprung[ANZAHL_WEITSPRUNG];
		int weitesterWeitsprung = -2;
		double kugelstossen[ANZAHL_KUGELSTOSSEN];
		double speerwerfen[ANZAHL_SPEERWERFEN];
		double hundert_m_lauf = 0;
	};
	struct T_SPORTLER {
		string name = "";
		string vorname = "";
		unsigned short alter = 0;
		T_DISZIPLINEN disziplinen;
	};

	T_SPORTLER athleten[MAX_SPIELER];
	cout << "=======================================================" << endl;
	cout << "                      Sportfest" << endl;
	cout << "=======================================================" << endl << endl;

	for(int aktuellerSpieler = 0; aktuellerSpieler < MAX_SPIELER; aktuellerSpieler++) {
		cout << "Sportler " << aktuellerSpieler + 1 << "\nName: ";
		cin >> athleten[aktuellerSpieler].name;
		cout << "Vorname: ";
		cin >> athleten[aktuellerSpieler].vorname;
		cout << "Alter: ";
		cin >> athleten[aktuellerSpieler].alter;
	}

	cout << endl;

	for(int aktuellerSprung = 0; aktuellerSprung < ANZAHL_WEITSPRUNG; aktuellerSprung++) {
		cout << "Sprung " << aktuellerSprung + 1 << endl;
		for(int aktuellerSpieler = 0; aktuellerSpieler < MAX_SPIELER; aktuellerSpieler++) {
			cout << aktuellerSpieler + 1 << ": " << athleten[aktuellerSpieler].name << ", " << athleten[aktuellerSpieler].vorname << ": ";
			cin >> athleten[aktuellerSpieler].disziplinen.weitsprung[aktuellerSprung];
			if(athleten[aktuellerSpieler].disziplinen.weitsprung[athleten[aktuellerSpieler].disziplinen.weitesterWeitsprung] < athleten[aktuellerSpieler].disziplinen.weitsprung[aktuellerSprung]) {
				athleten[aktuellerSpieler].disziplinen.weitesterWeitsprung = aktuellerSprung;
			}
		}
	}

	cout << "\nBestleistungen Weitsprung:\n";
	int gewinnerWeitsprung = 0;
	for(int aktuellerSpieler = 0; aktuellerSpieler < MAX_SPIELER; aktuellerSpieler++) {
		cout << "Die Bestweite von " << athleten[aktuellerSpieler].name << ", " << athleten[aktuellerSpieler].vorname << " betrug " << athleten[aktuellerSpieler].disziplinen.weitsprung[athleten[aktuellerSpieler].disziplinen.weitesterWeitsprung] << "m\n";
		if(athleten[gewinnerWeitsprung].disziplinen.weitsprung[athleten[gewinnerWeitsprung].disziplinen.weitesterWeitsprung] < athleten[aktuellerSpieler].disziplinen.weitsprung[athleten[aktuellerSpieler].disziplinen.weitesterWeitsprung]) {
			athleten[gewinnerWeitsprung].disziplinen.weitsprung[athleten[gewinnerWeitsprung].disziplinen.weitesterWeitsprung] = athleten[aktuellerSpieler].disziplinen.weitsprung[athleten[aktuellerSpieler].disziplinen.weitesterWeitsprung];
		}
	}
//FIXME Spieler 0 gewinnt immer
	cout << "\nGewinner Weitsprung: " << athleten[gewinnerWeitsprung].name << ", " << athleten[gewinnerWeitsprung].vorname << endl;
	return 0;
}
