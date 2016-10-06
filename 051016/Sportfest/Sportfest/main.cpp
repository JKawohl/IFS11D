// Sportfest.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//


#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;


int main()
{
	struct T_Disziplin { double Kugelstoßen[6]; double Speerwerfen[6]; double Sprint; double Weitsprung[3]; };
	struct T_Sportler { string Name; string Vorname; unsigned int Alter; T_Disziplin Disziplin; };

	const unsigned int Teilnehmer = 2;

	T_Sportler Athleten[Teilnehmer];

	for (int i = 0; i < Teilnehmer; i++)
	{
		for (int z = 0; z < 6; z++)
		{
			Athleten[i].Disziplin.Kugelstoßen[z] = 0;
			Athleten[i].Disziplin.Speerwerfen[z] = 0;
		}
		for (int z = 0; z < 3; z++)
		{
			Athleten[i].Disziplin.Weitsprung[z] = 0;
		}
		Athleten[i].Disziplin.Sprint = 0;
	}

	for (int i = 0; i < Teilnehmer; i++)
	{
		cout << "Bitte geben Sie den Namen für den " << i + 1 << ". Teilnehmer ein: ";
		cin >> Athleten[i].Name;
		cout << "Bitte geben Sie den Vornamen für den " << i + 1 << ". Teilnehmer ein: ";
		cin >> Athleten[i].Vorname;
		cout << "Bitte geben Sie das Alter für den " << i + 1 << ". Teilnehmer ein: ";
		cin >> Athleten[i].Alter;
	}

	for (int z = 0; z < 3; z++)
	{
		for (int i = 0; i < Teilnehmer; i++)
		{
			cout << "Bitte geben Sie für den Teilnehmer: " << Athleten[i].Vorname << " " << Athleten[i].Name << "den " << z + 1 << ".Versuch des Weitsprungs ein : ";
			cin >> Athleten[i].Disziplin.Weitsprung[z];
		}
	}
	for (int z = 0; z < 6; z++)
	{
		for (int i = 0; i < Teilnehmer; i++)
		{
			cout << "Bitte geben Sie für den Teilnehmer: " << Athleten[i].Vorname << " " << Athleten[i].Name << "den " << z + 1 << ".Versuch des Kugelstoßen ein : ";
			cin >> Athleten[i].Disziplin.Kugelstoßen[z];
		}
	}

	for (int z = 0; z < 6; z++)
	{
		for (int i = 0; i < Teilnehmer; i++)
		{
			cout << "Bitte geben Sie für den Teilnehmer: " << Athleten[i].Vorname << " " << Athleten[i].Name << "den " << z + 1 << ".Versuch des Speerwerfen ein : ";
			cin >> Athleten[i].Disziplin.Speerwerfen[z];
		}
	}

	for (int i = 0; i < Teilnehmer; i++)
	{
		cout << "Bitte geben Sie für den Teilnehmer: " << Athleten[i].Vorname << " " << Athleten[i].Name << "die Laufzeit für 100m ein: ";
		cin >> Athleten[i].Disziplin.Sprint;
	}
	getchar();
	getchar();


	return 0;
}