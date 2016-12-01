#include <iostream>
#include <time.h>

void ziehung(int *);
int zufall (int, int);
void ausgabe(int * p_lotto, int laenge);
int iAnzahl = 1;

int main() {
	using namespace std;
	srand((unsigned)time(NULL));
	cout << "=======================================================" << endl;
	cout << "                    Lotto 6 aus 49" << endl;
	cout << "=======================================================" << endl << endl;

	int ai_lotto[7];

	for (int i = 0; i <= iAnzahl; i++) {
		ziehung(ai_lotto);
	}
	ausgabe(&ai_lotto[1], 6);
	cout << "\nSuperzahl: " << ai_lotto[0] << "\n";
}

void ziehung(int * p_lotto) {
	for(int i = 1; i < 7; i++) {
		*(p_lotto + i) = zufall(49, 1);
	}

	*(p_lotto) = zufall(10, 1);
}

int zufall (int bereich, int start) {
	return rand() % bereich + start;
}

void ausgabe(int * p_lotto, int laenge) {
	for(int i = 0; i < laenge; i++) {
		std::cout << *(p_lotto + i) << " ";
	}
	std::cout << "\n";
}
