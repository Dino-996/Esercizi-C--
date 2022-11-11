#include <iostream>
#include <cmath>
using namespace std;

// Procedura per l'acquisizione dei coefficienti
void leggiEquazione (float& a, float& b, float& c) {
	cout << "Inserisci i coefficenti \n";
	cin >> a;
	cin >> b;
	cin >> c;
	return;
}

// Procedura per la stampa dei dati di un'equazione
void stampaRadici (float a, float b, float c, float x, float y) {
	cout << "_________Equazione_________ \n";
	cout << a << "x^2 + " << b <<"x + " << c << " = 0 \n";
	cout << "Radici: x = " << x <<", y = " << y << endl;
	cout << "____________________________\n";
	return;
}

// Funzione per il calcolo del discriminante
float discriminante (float a, float b, float c) {
	float d;
	d = b * b - 4 * a * c;
	return d;
}

//Funzione per il calcolo della prima radice reale
//ATTENZIONE! I parametri potrebbero essere i,j,k
float primaRadice (float a, float b, float c) {
	float x;
	x = (-b + sqrt(discriminante(a, b, c))) / (2 * a);
	return x;
}

//Funzione per il calcolo della seconda radice reale
float secondaRadice (float a, float b, float c) {
	float y;
	y = (-b - sqrt(discriminante(a, b, c))) / (2 * a);
	return y;
}

//Programma principale
int main () {
	float a1, b1, c1;
	float a2, b2, c2;
	float x1, x2;
	float y1, y2;
	leggiEquazione(a1, b1, c1);
	leggiEquazione(a1, b1, c1);
	if (discriminante(a1, b1, c1) >= 0 && discriminante (a2, b2, c2) >= 0) {
		x1 = primaRadice(a1, b1, c1);
		y1 = secondaRadice(a1, b1, c1);
		x2 = primaRadice(a2, b2, c2);
		y2 = secondaRadice(a2, b2, c2);
		stampaRadici(a1, b1, c1, x1, y1);
		stampaRadici(a2, b2, c2, x2, y2);
		if ((x1==x2) || (x1==y2) || (y1==x2) || (y1==y2)) {
			cout << "Le due equazioni hanno radici in comune" << endl;
		} else {
			cout << "Le due equazioni non hanno radici in comune" << endl;
		}
	} else {
		cout << "Non tutte le radici sono reali \n";
	}
	return 0;
}