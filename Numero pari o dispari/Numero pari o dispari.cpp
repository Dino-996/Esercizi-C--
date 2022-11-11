//Rivela se un numero è pari o dispari

#include <iostream>
using namespace std;
int main () {

//Dichiarazioni
int a;

//Operazioni
cout << "Inserisci un numero: ";
cin >> a;
if ((a % 2) == 0){
	cout << "Il numero è pari" << endl;
} else {
	cout << "Il numero è dispari" << endl;
}
cout << "Fine" << endl;
return 0;
}