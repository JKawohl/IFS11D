#include <iostream>
#include <math.h>
#include <cstdlib>

//foo

int menue();
float eingabeBetrag();
float berechneEndbetrag(float zins, int laufzeit, float kapital);
void berechneEndbetrag_jaehrlich(float zins, int laufzeit, float kapital);

int main () {
	menue();
}

int menue() {
	using namespace std;
	char neu;
	do {
		system("clear");
		int auswahl, laufzeit;
		float zins, kapital;
		cout << "Zinsberechnung\n\nBitte Menuepunkt auwaehlen\n\n<1> Endbetrag berechnen\n<2> Endbetrag mit jaehrlicher Ausgabe" << endl;
		cin >> auswahl;
		if(auswahl > 2 || auswahl < 0) {
			return -1;
		}
		system("clear");
		cout << "Sparplan berechnen\n\nBitte geben Sie das Startkapital in Euro ein: ";
		kapital = eingabeBetrag();
		cout << "Bitte geben Sie den Zinssatz in % ein: ";
		zins = eingabeBetrag();
		cout << "Bitte geben Sie die Laufzeit in Jahren ein: ";
		laufzeit = eingabeBetrag();

		if(auswahl == 1) {
			cout << berechneEndbetrag(zins, laufzeit, kapital) << endl;
		} else {
			berechneEndbetrag_jaehrlich(zins, laufzeit, kapital);
		}
		cout << "Neue Berechnung? (Y/N)" << endl;
		cin >> neu;
	} while(neu == 'y' || neu == 'Y' || neu == 'j' || neu == 'J');
	return 0;
}

float berechneEndbetrag(float z, int l, float k) {
	return k * pow((1 + (z / 100)), l);
}

void berechneEndbetrag_jaehrlich(float z, int l, float k) {
	using namespace std;
	float end = k;
	for(int i = 1; i <= l; i++) {
		end *= (1 + z / 100);
		cout << "Nach dem " << i << ". Jahr:\t" << end << endl;
	}
}

float eingabeBetrag() {
	float in;
	std::cin >> in;
	if(in < 0) {
		return -in;
	}
	return in;
}
