#include <iostream>
using namespace std;
void scambia (int& x, int& y);

int main () {
	int a, b;
	cout << "Immetti il valore di a: "; cin >> a;
	cout << "Immetti il valore di b: "; cin >> b;
	scambia(a, b);
	cout << "Valore di a dopo lo scambio: " << a << endl;
	cout << "Valore di b dopo lo scambio: " << b << endl;
	return 0;
}

void scambia (int& x, int&y) {
	int z;
	z = x;
	x = y;
	y = z;
	return;
}