#include <iostream>
#include <time.h>

void ziehung(int *);
int zufall (int, int);
void sort(int * p_lotto, int laenge);
void ausgabe(int * p_lotto, int laenge);
int iAnzahl = 1;

void printSame(int anzahl, char sign, int newline);

int main() {
	using namespace std;
	srand((unsigned)time(NULL));
	printSame(50,'=',1);
	cout << "\t\tLotto 6 aus 49" << endl;
	printSame(50,'=',2);

	int ai_lotto[7];

	for (int i = 0; i <= iAnzahl; i++) {
		ziehung(ai_lotto);
	}
	sort(&ai_lotto[1], 6);
	ausgabe(&ai_lotto[1], 6);
	cout << "\nSuperzahl: " << ai_lotto[0] << "\n";
}

void ziehung(int * p_lotto) {
	for(int i = 1; i < 7; i++) {
		*(p_lotto + i) = zufall(49, 1);
	}

	*(p_lotto) = zufall(10, 0);
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

void sort(int * p_lotto, int laenge) {
	int iTemp;
	for(int i = laenge; i > 0; i--) {
		for(int k = 0; k < i; k++) {
			if(p_lotto[k] > p_lotto[k + 1]) {
				iTemp = p_lotto[k];
				p_lotto[k] = p_lotto[k + 1];
				p_lotto[k + 1] = iTemp;
			}
		}
	}
}

void printSame(int anzahl, char sign, int newline){
	for(int i=0; i<anzahl; i++){
		std::cout << sign;
	}
	for(int i=0; i<newline; i++){
		std::cout << std::endl;
	}
}
