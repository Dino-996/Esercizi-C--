#include <iostream>
#include <cmath>
using namespace std;
// Prototipi dei sottoprogrammi
void leggiEquazione (float&a, float&b, float&c);
void stampaRadici (float a, float b, float c, float x, float y);
float primaRadice (float a, float b, float c);
float secondaRadice (float a, float b, float c);
float discriminante (float a, float b, float c);

//Programma principale
int main() {
	float a1, b1, c1;
	float a2, b2, c2;
	float x1, y1, x2, y2;
	leggiEquazione(a1, b1, c1);
	leggiEquazione(a2, b2, c2);
	if (discriminante(a1, b1, c1)>=0 && discriminante (a2, b2, c2)>=0) {
		x1 = primaRadice (a1, b1, c1);
		y1 = secondaRadice (a1, b1, c1);
		x2 = primaRadice (a2, b2, c2);
		y2 = secondaRadice(a2, b2, c2);
		stampaRadici (a1, b1, c1, x1, y1);
		stampaRadici (a2, b2, c2, x2, y2);
		if ((x1==x2) || (x1==y2) || (y1==x2) || (y1==y2))
			cout << "Le due equazioni hanno radici comuni" << endl;
		else
			cout << "Le due equazioni non hanno radici comuni" << endl;
	} else
		cout << "Non tutte le radici sono reali \n";
	return 0;
}

//Definizioni dei sottoprogrammi
void leggiEquazione (float&a, float&b, float&c) {
	cout << "nserici i coefficienti dell'equazione \n";
	cin >> a;
	cin >> b;
	cin >> c;
	return;
}

float discriminante (float a, float b, float c) {
	float d;
	d = b*b-4*a*c;
	return d;
}

float primaRadice (float a, float b, float c){
	float x;
	x = (-b+sqrt(discriminante(a, b, c)))/(2*a);
		return x;
}

float secondaRadice (float a, float b, float c) {
	float y;
	y = (-b-sqrt(discriminante(a, b, c)))/(2*a);
	return y;
}

void stampaRadici (float a, float b, float c, float x, float y) {
	cout << "----------Equazione----------\n"
	cout << a << "x2+" << b <<"x+" << c << "=0 \n";
	cout << "Radici: x=" << x << ", y" << y << endl;
	cout << "-----------------------------\n";
	return;
}