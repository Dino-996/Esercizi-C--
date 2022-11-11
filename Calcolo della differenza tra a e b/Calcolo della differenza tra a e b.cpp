//Calcolo differenza a e b

#include <iostream>
using namespace std;
int main () {

	//Dichiarazioni
	int a, b, differenza;

	//Operzioni
	cout << "Scivi un numero intero: " << endl;
	cin >> a;
	cout << "Scrivi un altro numero intero" << endl;
	cin >> b;
	if (a > b) {
		cout << "a è maggiore di b" << endl;
		differenza = a - b;
	} else {
		if (b > a) {
			cout << "b è maggiore di a" << endl;
		} else {
			cout << "a e b sono uguali" << endl;
		}
		differenza = b - a;
	}
	cout << "Differenza: " << differenza << endl;
	return 0;
}