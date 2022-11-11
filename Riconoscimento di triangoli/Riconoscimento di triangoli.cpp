//Preambolo
#include <iostream>
using namespace std;
int main (){
	//Dichiarazioni
	float a, b, c;
	//Operazioni
	cout << "Inserire i valori dei 3 lati del triangolo: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a == b) && (b == c)){
		cout << "Il triangolo è EQUILATERO";
	} else {
		if ((a == b) || (a == c) || (b == c)){
			cout << "Il triangolo è ISOSCELE";
		} else {
			cout << "Il triangolo è SCALENO" << endl;
		}
	}
	cout << " " << endl;
	cout << "Programma terminato" << endl;
	return 0;
}