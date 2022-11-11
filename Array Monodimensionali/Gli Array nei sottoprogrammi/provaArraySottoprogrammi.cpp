#include <iostream>
using namespace std;
//Prototipi
int contanumeri(int numeri[6]);
//Programma Principale
int main (){

int numeri[6]={2,4,6,8,10,12};
contanumeri(numeri);

 return 0;
}
//Sottoprogramma. Array che trova numeri maggiori e minori di 6
int contanumeri(int numeri[6]) {

for (int i = 0; i < 6; i++) {
	if (numeri[i] < 6) {
		cout << "L'elemento " << numeri[i] << " è minore di 6" << endl;
	} if (numeri[i] > 6) {
		cout << "L'elemento " << numeri[i] << " è maggiore di 6" << endl;
	}
}

	return 0;
}