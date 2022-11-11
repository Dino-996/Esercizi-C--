//Librerie
#include <iostream>
using namespace std;
int main () {
	
	//Dichiarazioni
	float raggio, areaCerchio;
	float const pigreco = 3.14;
	
	//Operzioni
	cout << "QUESTO PROGRAMMA CALCOLA L'AREA DI UN CERCHIO" << endl;
	cout << " ";
	cout << "Inserisci quanto vale il raggio del cerchio: ";
	cin >> raggio;
	cout << " ";
	areaCerchio = raggio*raggio*pigreco;
	cout << "L'area del cerchio vale: " << areaCerchio << endl;
return 0;
}