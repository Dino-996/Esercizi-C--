//numero maggiore o minore

#include <iostream>
using namespace std;
int main () {
	
	//Dichiarazioni
	int a, b;

	//Operazioni
	cout << "Inserisci un numero: ";
	cin >> a;
	cout << "Inserisci un altro numero: ";
	cin >>b;
	if (a > b) {
	cout << "a è maggiore di b" << endl;
	cout << "Valore di a: " << a;
	} else {
	cout << "a non è maggiore di b" << endl;
	cout << "Valore di b: " << b;
	}
	return 0;
}