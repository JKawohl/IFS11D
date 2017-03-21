// Array1.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int Werte[7] = { 0 };
int x = 0;
int main()
{
	
	for (int K = 0; K < 7; K++)
	{
		Werte[K] = x;
			x = x + 2;
			cout << x << " " ;
	}
	
	getchar();
	getchar();

    return 0;
}

