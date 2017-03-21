#include <iostream>
#include <cmath>
#include <cstdlib>

int menu();
void kartpolar(double x, double y, double& r, double& w);
void polarkart(double& x, double& y, double r, double w);

int main() {
	using namespace std;
	int iAuswahl;
	double x, y, r, w;
	do {
		iAuswahl = menu();

		switch (iAuswahl) {
		case 1:
			cout << "X eingeben: ";
			cin >> x;
			cout << "Y eingeben: ";
			cin >> y;
			kartpolar(x, y, r, w);
			w = w * 180 / M_PI;
			cout << "Radius: " << r << " Winkel: " << w << endl;
			break;
		case 2:
			cout << "Radius eingeben: ";
			cin >> r;
			cout << "Winkel in Grad eingeben: ";
			cin >> w;
			w = w * M_PI / 180;
			polarkart(x, y, r, w);
			cout << "X: " << x << " Y: " << y << endl;
			break;
		case 0:
			break;
		default:
			cout << "Falsche Eingabe" << endl;
			break;
		}

	} while(iAuswahl != 0);

	return 0;
}

int menu() {
	using namespace std;
	int iAuswahl = 0;
	cout << "0: Programm beenden" << endl;
	cout << "1: Polarkoordinaten nach kartesischen Koordinaten" << endl;
	cout << "2: Kartesischen Koordinaten nach Polarkoordinaten" << endl;
	cout << "Bitte Auswahl treffen:\t";
	cin >> iAuswahl;
	return iAuswahl;
}

void kartpolar(double x, double y, double& r, double& w) {
	r = sqrt(x * x + y * y);
	w = atan(y / x);
}

void polarkart(double& x, double& y, double r, double w) {
	x = r * cos(w);
	y = r * sin(w);
}
