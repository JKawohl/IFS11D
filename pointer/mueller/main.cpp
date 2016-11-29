#include <iostream>

void fuellen(char * p_char, int * p_int);
void showArray(int * p_int);

int main() {
	using namespace std;
	int aiFeld[20] = {0};
	char acZeichen[21];
	cout << "Zeichen eingeben (max. 20 Zeichen)\n";
	cin >> acZeichen;

	fuellen(acZeichen, aiFeld);
	cout << "Int Array:\n";
	//for(int i = 0; i < 20; i++) {
	//cout << aiFeld[i] << " \n";
	//}
	showArray(aiFeld);

}

void fuellen(char * p_char, int * p_int) {
	for(int i = 0; * (p_char + i) != '\0'; i++) {
		*(p_int + i) = *(p_char + i);
	}
}

void showArray(int * p_int) {
	for(int i = 0; * (p_int + i) != 0; i++) {
		std::cout << *(p_int + i) << "\n";
	}
}

