#include <iostream>
#include <cmath>
using namespace std;

const float POLLICI = 2.54;

void leggiDati(float& base, float& altezza);
float calcolaDiagonale(float base, float altezza);
float trasformaInPollici(float valore);
void leggiValorePositivo(float& valore);

int main () {
 float base, altezza; //Input dati
 float dimensionePollici; //Output dati

 leggiDati(base, altezza);
 float diagonaleInCm = calcolaDiagonale(base, altezza);
 dimensionePollici = trasformaInPollici(diagonaleInCm);
 cout << "Dimensione in pollici: " << dimensionePollici << endl;
	return 0;
}

void leggiDati(float& base, float& altezza) {
	cout << "Inserire il valore della base" << endl;
	leggiValorePositivo (base);
	cout << "Inserire il valore dell'altezza" << endl;
	leggiValorePositivo (altezza);
	cout << "Le dimensioni del televisore sono: " << base << " e " << altezza << endl;
	return;
}

float calcolaDiagonale(float base, float altezza) {
	float diagonale = sqrt((base * base) + (altezza * altezza));
	return diagonale;
}

float trasformaInPollici(float valore) {
	return (valore / POLLICI);
}

void leggiValorePositivo(float& valore) {
	cin >> valore;
	while (valore <= 0) {
		cout << "***Errore: il valore deve essere maggiore di 0" << endl;
		cin >> valore;
	}
	
	return;
}