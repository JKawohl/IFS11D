#include <iostream>
#include <math.h>

using namespace std;
#define M_PI 3.14159265



struct T_kart {
	float fx;
	float fy;
};

struct T_polar {
		float fWinkel;
		float fRadius;
};

T_polar kart_polar(T_kart KKoordi);
T_kart polar_kart(T_polar PKoordi);

int main()
{
	T_kart KartKoordinaten;
	T_polar Polarkoordinaten;
	int i_Auswahl = 0;

	cout << "Bitte geben Sie 1 ein um die Winkelkoordinaten zu erfahren\noder 2 um die Radiuskoordinaten zu erfahren." << endl;
	cin >> i_Auswahl;

	switch (i_Auswahl) {
	case 1: cout << " Winkelkoordinate: "; cin >> Polarkoordinaten.fWinkel;
		cout << " Radiuskoordinate: "; cin >> Polarkoordinaten.fRadius;
		KartKoordinaten = polar_kart(Polarkoordinaten);
		cout << "X:  " << KartKoordinaten.fx << "\tY: " << KartKoordinaten.fy;
		break;

	case 2: cout << "X Koordinate: "; cin >> KartKoordinaten.fx;
		cout << "Y Koordinate: "; cin >> KartKoordinaten.fy;

		Polarkoordinaten = kart_polar(KartKoordinaten);
		cout << "fWinkel: " << Polarkoordinaten.fWinkel << " \tfRadius: "
			<< Polarkoordinaten.fRadius;
		break;
	default: cout << "Bitte treffen Sie eine gültige Auswahl";
	}
	getchar();
	getchar();
		return 0;

}

		T_polar kart_polar(T_kart KKoordi)
		{
			T_polar PKoordi;
			PKoordi.fWinkel = 180 / M_PI * tan (KKoordi.fy / KKoordi.fx);
			PKoordi.fRadius = sqrt(KKoordi.fx * KKoordi.fx + KKoordi.fy * KKoordi.fy);
			return (PKoordi);
}
		T_kart polar_kart(T_polar PKoordi)
		{
			T_kart KKoordi;
			KKoordi.fx = PKoordi.fRadius * cos(PKoordi.fWinkel * M_PI / 180);
			KKoordi.fy = PKoordi.fRadius * sin(PKoordi.fWinkel *  M_PI / 180);
			return (KKoordi);

		}