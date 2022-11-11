//Calcolo radice quadrata
#include <iostream>
using namespace std;
int main () {

	//Dichiarazioni
	int a;
	 //Operazioni
	cout << "immetti un numero: ";
	cin >> a;
	if (a < 0) {
		a = abs (a);
	}
	cout << "Radice quadrata: " << sqrt (a);
	return 0;
}