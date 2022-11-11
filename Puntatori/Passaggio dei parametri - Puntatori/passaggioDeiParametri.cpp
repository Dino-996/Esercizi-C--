#include <iostream>
using namespace std;

void scambia (int* px, int* py);

int main () {
	int a, b;
	cout << "Immetti l'indirizzo di memoria di a: "; cin >> a;
	cout << "Immetti l'indirizzo di memoria di b: "; cin >> b;
	int* pa = &a; //Restituisce l'indirizzo di memoria di a
	int* pb = &b; //Restituisce l'indirizzo di memoria di b
	scambia(pa, pb); //in alternativa scambia(&a, &b)
	cout << "Valore di a dopo lo scambio: " << a << endl;
	cout << "Valore di b dopo lo scambio: " << b << endl;
	return 0;
}
void scambia (int* px, int* py) {
	int z;
	z = *px; //Utilizza lo spazio di memoria puntato dal dato
	*px = *py;
	*py = z;
	return;
}