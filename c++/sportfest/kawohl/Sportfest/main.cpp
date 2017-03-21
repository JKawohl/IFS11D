// Sportfest.cpp : Definiert den Einstiegspunkt f�r die Konsolenanwendung.
//


#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;


int main()
{
	struct T_Disziplin { double Kugelsto�en[6]; double Speerwerfen[6]; double Sprint; double Weitsprung[3]; };
	struct T_Sportler { string Name; string Vorname; unsigned int Alter; T_Disziplin Disziplin; };

	const unsigned int Teilnehmer = 2;

	T_Sportler Athleten[Teilnehmer];

	for (int i = 0; i < Teilnehmer; i++)
	{
		for (int z = 0; z < 6; z++)
		{
			Athleten[i].Disziplin.Kugelsto�en[z] = 0;
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
		cout << "Bitte geben Sie den Namen f�r den " << i + 1 << ". Teilnehmer ein: ";
		cin >> Athleten[i].Name;
		cout << "Bitte geben Sie den Vornamen f�r den " << i + 1 << ". Teilnehmer ein: ";
		cin >> Athleten[i].Vorname;
		cout << "Bitte geben Sie das Alter f�r den " << i + 1 << ". Teilnehmer ein: ";
		cin >> Athleten[i].Alter;
	}

	for (int z = 0; z < 3; z++)
	{
		for (int i = 0; i < Teilnehmer; i++)
		{
			cout << "Bitte geben Sie f�r den Teilnehmer: " << Athleten[i].Vorname << " " << Athleten[i].Name << "den " << z + 1 << ".Versuch des Weitsprungs ein : ";
			cin >> Athleten[i].Disziplin.Weitsprung[z];
		}
	}
	for (int z = 0; z < 6; z++)
	{
		for (int i = 0; i < Teilnehmer; i++)
		{
			cout << "Bitte geben Sie f�r den Teilnehmer: " << Athleten[i].Vorname << " " << Athleten[i].Name << "den " << z + 1 << ".Versuch des Kugelsto�en ein : ";
			cin >> Athleten[i].Disziplin.Kugelsto�en[z];
		}
	}

	for (int z = 0; z < 6; z++)
	{
		for (int i = 0; i < Teilnehmer; i++)
		{
			cout << "Bitte geben Sie f�r den Teilnehmer: " << Athleten[i].Vorname << " " << Athleten[i].Name << "den " << z + 1 << ".Versuch des Speerwerfen ein : ";
			cin >> Athleten[i].Disziplin.Speerwerfen[z];
		}
	}

	for (int i = 0; i < Teilnehmer; i++)
	{
		cout << "Bitte geben Sie f�r den Teilnehmer: " << Athleten[i].Vorname << " " << Athleten[i].Name << "die Laufzeit f�r 100m ein: ";
		cin >> Athleten[i].Disziplin.Sprint;
	}
	getchar();
	getchar();


	return 0;
}