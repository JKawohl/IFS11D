#include <iostream>
#include <string>

const int MAX_SPIELER = 10;

int main() {
	using namespace std;
	struct T_DISZIPLINEN {
		double weitsprung[3] = {0, 0, 0};
		double kugelstossen[6] = {0, 0, 0, 0, 0, 0};
		double speerwerfen[6] = {0, 0, 0, 0, 0, 0};
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
		cout << "Spieler " << aktuellerSpieler + 1 << "\nName: ";
		cin >> athleten[aktuellerSpieler].name;
		cout << "Vorname: ";
		cin >> athleten[aktuellerSpieler].vorname;
		cout << "Alter: ";
		cin >> athleten[aktuellerSpieler].alter;
	}

	for(int aktuellerWurf = 0; aktuellerWurf < 4; aktuellerWurf++) {
		for(int aktuellerSpieler = 0; aktuellerSpieler < MAX_SPIELER; aktuellerSpieler++) {
			cout << "Wurf " << aktuellerWurf + 1 << "\nSpieler " << aktuellerSpieler + 1 << ": ";
			cin >> athleten[aktuellerSpieler].disziplinen.weitsprung[aktuellerWurf];
		}
	}
}
