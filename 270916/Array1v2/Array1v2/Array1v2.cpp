// Array1v2.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int Werte[7] = {0};
int main()
{
	for (int K = 0; K < 7; K++)
	{
		
		Werte[K] = (K + 1) * 2;
		cout << K << "  ";
		
	}
	
	getchar();
	getchar();
	
    return 0;
}

