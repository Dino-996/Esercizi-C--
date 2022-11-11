//Preambolo
#include <iostream>
using namespace std;

//Costanti
const int MAX_DIM = 100;

//Record
struct lista {
	int indicatore;
	int voti[MAX_DIM];
};

//Prototipi
void schermoMenu(int& scelta);
void leggiIntero(int& valore, string messaggio, int min, int max);
void leggiVoti(lista& studenti);
void stampaVoti(lista votiStudenti);
void aggiungiVoto(lista& votiStudenti);

//Programma
int main () {
	lista votiStudenti;
	votiStudenti.indicatore = 0;
	int scelta;
	while (true) {
		schermoMenu(scelta);
		if (scelta == 0) {
			break;
		}
		if (scelta == 1) {
			leggiVoti(votiStudenti);
		}
		if (scelta == 2) {
			stampaVoti(votiStudenti);
		}
		if (scelta == 3){
			aggiungiVoto(votiStudenti);
		}
	}

	return 0;
}

//Sottoprogramma che fa da menú
void schermoMenu(int& scelta) {
	cout << "****************************************" << endl;
	cout << "* 1. Carica voti studenti" << endl;
	cout << "* 2. Stampa voti studenti" << endl;
	cout << "* 3. Aggiungi voto studente" << endl;
	cout << "* 0. Esci" << endl;
	cout << "****************************************" << endl;
	leggiIntero(scelta, "Scelta --> ", 0, 3);
	return;
}

//Sottoprogramma che legge un valore intero
void leggiIntero(int& valore, string messaggio, int min, int max) {
	cout << messaggio;
	cin >> valore;
	while (valore < min || valore > max) {
		cout << "***Errore. Inserire un numero compreso tra " << min << " e " << max << endl;
		cout << messaggio;
		cin >> valore;
	}
	return;
}

//Sottoprogramma che carica i voti degli studenti
void leggiVoti(lista& votiStudenti) {
	leggiIntero(votiStudenti.indicatore, "Quanti voti vuoi inserire?", 0, MAX_DIM);
	for (int i = 0; i < votiStudenti.indicatore; i++) {
		leggiIntero(votiStudenti.voti[i], "Inserisci il voto: ", 18, 30);
	}
	return;
}

//Sottoprogramma che stampa i voti degli studenti
void stampaVoti(lista votiStudenti) {
	if (votiStudenti.indicatore == 0) {
		cout << "Lista studenti vuota" << endl;
		return;
	}
	for(int i = 0; i < votiStudenti.indicatore; i++){
		cout << "Voto studente n. " << i + 1 << votiStudenti.voti[i] << endl;
	}
	return;
}
//Sottoprogramma che stampa i voti degli studenti
void aggiungiVoto(lista& votiStudenti) {

	return;
}