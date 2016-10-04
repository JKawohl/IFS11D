// Würfelspiel_struct.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//


#include <iostream>
#include <stdio.h>
#include <time.h>
#include <string>


using namespace std;

void haeufigkeit(unsigned int, unsigned int[]);

int main()
{
	const int MAXS = 1;

	struct T_Spieler { char Name[20]; unsigned int Wuerfel[10]; unsigned int igesamt; };
	T_Spieler Spieler[MAXS];
	unsigned int haeufig[6] = { 0 };


	//Spielernamen einlesen
	cout << "Bitte geben Sie einen Namen ein: \n";
	cin >> Spieler[0].Name;
	srand((unsigned)time(NULL));


	for (int i = 0; i < 10; i++)
	{
		int Zahl = 0;
		Zahl = rand() % 6 + 1;
		Spieler[0].Wuerfel[i] = Zahl;
		haeufigkeit(Zahl, haeufig);
	}

	// Zahlen des Spielers werden ausgegeben
	cout << "Zahlen von: " << Spieler[0].Name << " ";
	for (int i = 0; i < 10; i++)
	{
		cout << Spieler[0].Wuerfel[i] << " ";
	}

	cout << endl << endl;

	//Haeufigkeiten der Zahlen werden ausgegeben.
	for (int i = 0; i < 6; i++)
	{
		cout << "Haeufigkeit der Zahl: " << i + 1 << " ist: " << haeufig[i] << endl;
	}

	// die Konstante wird ausgegeben.
	cout << MAXS;

	getchar();
	getchar();
	return 0;
}



void haeufigkeit(unsigned int wuerfelzahl, unsigned int haeufig[]) {
	switch (wuerfelzahl)
	{
	case 1:
		haeufig[0]++;
		break;
	case 2:
		haeufig[1]++;
		break;
	case 3:
		haeufig[2]++;
		break;
	case 4:
		haeufig[3]++;
		break;
	case 5:
		haeufig[4]++;
		break;
	case 6:
		haeufig[5]++;
		break;
	}
}
