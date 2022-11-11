//Programma che analizza la sequenza di numeri estratti tirando un dado
#include <iostream>
using namespace std;

const int N = 10;
void schermoMenu (int &scelta);
void convalidaIntero (int &valore, string messaggio, int min, int max);
void schermoLeggiEstrazioni(int estrazioni[N]);

int name () {
	int estrazioni[N];
	bool continua = true;
	int scelta;
	//Tecnica del menu con variabile bandiera (tipo bool)
	while (continua) {
		schermoMenu(scelta);
	/**Alternativa alla variabile bandiera:
	while (true) {
	schermoMenu(scelta);
	if (scelta == 0) {
		break;**/	
		if (scelta == 0) {
			continua = false;
		}
		if (scelta == 1) {
			schermoLeggiEstrazioni (estrazioni);
		}
		if (scelta == 2) {
			;
		}
		
		if (scelta == 3) {
			;
		}

		if (scelta == 4) {
			;
		}

		if (scelta == 5) {
			;
		}

		if (scelta == 6) {
			;
		}

		if (scelta == 7) {
			;
		}

		if (scelta == 8) {
			;
		}

		if (scelta == 9) {
			;
		}
	}
	return 0;
}

void schermoMenu (int &scelta) {
	cout << "************************************" << endl;
	cout << "*       1. Leggi Estrazioni              *" << endl;
	cout << "*       2. Stampa Estrazioni             *" << endl;
	cout << "*       3. Conta numero 1                *" << endl;
	cout << "*       4. Conta numero 6                *" << endl;
	cout << "*       5. Trova minore                  *" << endl;
	cout << "*       6. Trova maggiore posizione pari *" << endl;
	cout << "*       7. Verifica consecutivi          *" << endl;
	cout << "*       8. Calcola media                 *" << endl;
	cout << "*       9. Genera Estrazione             *" << endl;
	cout << "*                                        *" << endl;
	cout << "*       0. Esci                          *"<< endl;
	cout << "************************************" << endl;
	cout << "\n";
	convalidaIntero (scelta, "Scelta -->", 0, 9);
	return;
}
void convalidaIntero (int &valore, string messaggio, int min, int max) {
	cout << messaggio;
	cin >> valore;
	while (valore < min || valore > max) {
		cout << "*** Errore. Inserire un numero compreso tra" << min << "e" << max << endl;
		cout << messaggio;
		cin >> valore;
	}
	return;
}

void schermoLeggiEstrazioni (int estrazioni[N]) {
	for (int i = 0; i < N; i++) {
		convalidaIntero(estrazioni[i], "Inserisci il valore: ", 1, 6);
	}
	return;
}