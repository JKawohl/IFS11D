#include <iostream>

void TauscheInhalt(int&, int &);

int main() {
	using namespace std;
	int a, b, c;

	cout << "Geben sie drei Zahlen ein:" << endl;
	cin >> a >> b >> c;

	if(b > c) {
		TauscheInhalt(b, c);
	}
	if(a > b) {
		TauscheInhalt(a, b);
		if(b > c) {
			TauscheInhalt(b, c);
		}
	}

	cout << a << " " << b << " " << c << endl;
	return 0;
}

void TauscheInhalt(int& a, int& b) {
	int x = a;
	a = b;
	b = x;
}
