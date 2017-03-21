#include <iostream>

void fuellen(char * p_char, int * p_int);
void fuellen2(char * p_char, int * p_int);
void showArray(int * p_int);

int main() {
	using namespace std;
	int aiFeld[20] = {0};
	char acZeichen[21];
	cout << "Zeichen eingeben (max. 20 Zeichen)\n";
	cin.getline(acZeichen, 21);

	//fuellen(acZeichen, aiFeld);
	fuellen2(acZeichen, aiFeld);

	showArray(aiFeld);
}

void fuellen(char * p_char, int * p_int) {
	for(int i = 0; * (p_char + i) != '\0'; i++) {
		*(p_int + i) = *(p_char + i);
	}
}

void fuellen2(char p_char[], int p_int[]) {
	for(int i = 0; p_char[i] != '\0'; i++) {
		p_int[i] = p_char[i];
	}
}

void showArray(int * p_int) {
	for(int i = 0; * (p_int + i) != 0; i++) {
		std::cout << i+1 << ":\t" << (char) *(p_int + i) << " = " << *(p_int + i) << "\n";
	}
}

