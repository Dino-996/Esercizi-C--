#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
	int numero1, numero2;
	cout << "***********************************************************************" << endl;
	cout << "\n" << endl;
	cout << "QUESTO PROGRAMMA RESTITUISCE I MULTIPLI DEL PRIMO NUMERO PER IL SECONDO" << endl;
	cout << "\n" << endl;
	cout << "***********************************************************************" << endl;
	cout << "Inserisci il primo numero: ";
	cin >> numero1;
	cout << "Inserisci il secondo numero: ";
	cin >> numero2;
	cout << "\n" << endl;
	while (numero1 <= numero2) {
   		cout << numero1 << " x " << numero2 << " = " << numero1 * numero2 << "\n";
   		numero1++;
   		}
   	cout << "\n" << endl;
   	cout << "*****************************************" << endl;
   	cout << "********** Programma Terminato **********" << endl;
   	cout << "*****************************************" << endl;
	return 0;
}

