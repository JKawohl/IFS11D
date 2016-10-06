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
	const unsigned int max = 8;
	unsigned int groeßer = 0;
	struct T_Spieler { string Name; unsigned int Wuerfel[10]; unsigned int gesamt; unsigned int statistik[6]; };
	T_Spieler Spieler[max];
	unsigned int haeufig[6] = { 0 };

	for (int i = 0; i < max; i++)
	{
		cout << "Bitte geben Sie einen Namen ein: \n";
		cin >> Spieler[i].Name;
		Spieler[i].gesamt = 0;
		for (int z = 0; z < 6; z++)
		{
			Spieler[i].statistik[z] = 0;
		}
	}
	srand((unsigned)time(NULL));

	for (int z = 0; z < max; z++)
	{
		for (int i = 0; i < 10; i++)
		{
			int Zahl = 0;
			Zahl = rand() % 6 + 1;
			Spieler[z].Wuerfel[i] = Zahl;
			haeufigkeit(Zahl, haeufig);
			Spieler[z].gesamt = Spieler[z].gesamt + Spieler[z].Wuerfel[i];

		}
	}

	for (int z = 0; z < max; z++)
	{
		cout << "Zahlen von " << Spieler[z].Name << " : ";
		for (int i = 0; i < 10; i++)
		{
			cout << Spieler[z].Wuerfel[i] << " ";
		}
		cout << endl << endl;
	}

	for (int i = 0; i < max; i++)
	{
		cout << "Die maximale Augenzahl des Spielers: " << Spieler[i].Name << " : " << Spieler[i].gesamt << endl;
	}
	cout << endl << endl;

	for (int i = 0; i < 6; i++)
	{
		cout << "Häufigkeit der Zahl: " << i + 1 << " ist: " << haeufig[i] << endl;
	}

	//Sortieren
	cout << "Sortiert nach maximaler Augenzahl: " << endl;

	for (int i = 0; i < max - 1; i++)
	{
		if (Spieler[i].gesamt > Spieler[i + 1].gesamt)
		{
			groeßer = i;
		}
		else
		{
			groeßer = i + 1;
		}
	}
	cout << "Die Augenzahl von " << Spieler[groeßer].Name << " ist größer!" << endl;

	system("Pause");
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
  