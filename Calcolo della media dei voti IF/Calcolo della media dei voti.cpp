//Calcolo media dei voti

#include <iostream>
using namespace std;
int main() {
	
	//Dichiarazioni
	float sommaVoti, numeroEsami, media;
	//Operazioni
	cout << "Inserisci la somma dei voti: ";
	cin >> sommaVoti;
	cout << "Inserisci il numero degli esami: ";
	cin >> numeroEsami;
	if (numeroEsami>0) {
		media = sommaVoti/numeroEsami;
		cout << "Media: " << media;
		cout << " " << endl;
		cout << "-Fine-" << endl;
	} else {
		cout << "La media degli esami non è calcolabile" << endl;
		cout << " " << endl;
		cout << "-Fine-" << endl;
	}
	return 0;
}