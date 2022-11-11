//Librerie
#include <iostream>
#include <cmath>
using namespace std;
int main () {
	
	//Dichiarazioni
	float i, numero, modulo;
	int numeroValori;
	
	//Operazioni
	cout << " " << endl;
	cout << "QUESTO PROGRAMMA CALCOLA IL VALORE ASSOLUTO DI UN NUMERO" << endl;
	cout << " " << endl;
	cout << "Quanti valori vuoi calcolare?" << endl;
	cout << " " << endl;
	cout << " ";
	cout << " Inserisci qui i valori: ";
	cin >> numeroValori;
	for (i = 0; i < numeroValori; i++) {
	cout << " " << endl;
	cout << "Inserisci un numero reale: ";
	cin >> numero;
	modulo = fabs(numero);
	cout << " " << endl;
	cout << "Il modulo del numero è: " << modulo << endl;
	cout << " " << endl;
	}
	return 0;
}