#include <iostream>
#include <math.h>
using namespace std;

int main () {
	float a1, b1, c1; //Coefficienti della prima equazione
	float a2, b2, c2; //Coefficienti della seconda equazione
	float x1, y1, x2, y2; //radici
	float d1, d2; //discriminanti
	cout << "Inserisci i coefficienti della prima equazione \n";
	cin >> a1;
	cin >> b1;
	cin >> c1;
	cout << "Inserisci i coefficienti della seconda equazione \n";
	cin >> a2;
	cin >> b2;
	cin >> c2;
	d1 = (b1 * b1) - (4 * a1 * c1);
	d2 = (b2 * b2) - (4 * a2 * c2);
	if (d1 >= 0 && d2 >= 0) {
		x1 = (-b1 + sqrt(d1)) / (2 * a1);
		y1 = (-b1 - sqrt(d1)) / (2 * a1);
		x2 = (-b2 + sqrt(d2)) / (2 * a2);
		y2 = (-b2 + sqrt(d2)) / (2 * a2);
		cout << "---------------Equazione---------------\n";
		cout << a1 << "x2+" << b1 << "x+" << c1 << "= 0 \n";
		cout << "Radici: x=" << x1 << ", y=" << y1 << endl;
		cout << "----------------------------------------\n";
		cout << "---------------Equazione----------------\n";
		cout << a2 << "x2+" << b2 << "x+" << c2 << "=0 \n";
		cout << "Radici: x=" << x2 << ", y=" << y2 << endl;
		cout << "----------------------------------------\n";
		if ((x1 == x2) || (x1 == y2) || (y1 == x2) || (y1 == y2)) {
			cout << "Le due equazioni hanno radici comuni" << endl;
		} else {
			cout << "Le due espressioni non hanno radici comuni" << endl;
		}
	} else {
		cout << "Non tutte le radici sono reali \n";
	}
	return 0;
}