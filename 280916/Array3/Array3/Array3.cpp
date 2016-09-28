// Array3.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>

using namespace std;



int main()
int x = 1;
int Werte[3][5];



{
	for (int Zeile =0; Zeile<=2; Zeile ++)
	{
		for (int Spalte = 0, Spalte <= 4; Spalte ++)
		{
			Werte[Zeile][Spalte] = x;
			x = x + 2;

		}
	}
	getchar();
	getchar();
    return 0;
}

