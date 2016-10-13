#include <iostream>
#include <stdlib.h>
#include <time.h>

void TauscheInhalt(bool&, bool&);

int main() {
	using namespace std;
	bool a = 0, b = 0, c = 0;
	int random;
	srand((unsigned) time(NULL));

	random = rand() % 3;

	switch(random) {
	case 0:
		a = 1;
		break;
	case 1:
		b = 1;
		break;
	case 2:
		c = 1;
		break;
	}

	cout << a << " " << b << " " << c << endl;

	TauscheInhalt(b, c);
	TauscheInhalt(a, b);
	TauscheInhalt(a, c);

	cout << a << " " << b << " " << c << endl;
	return 0;
}

void TauscheInhalt(bool& a, bool& b) {
	bool x = a;
	a = b;
	b = x;
}
