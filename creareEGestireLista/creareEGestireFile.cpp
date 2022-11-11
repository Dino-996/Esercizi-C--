#include <iostream>
#include <fstream>

using namespace std;

void schermoMenuLista (int &scelta);
void sceltaFile (int &scelta);
void convalidaDati (string messaggio, int &valore, int massimo, int minimo);

int main () {
	int scelta;
	while (true) {
		schermoMenuLista (scelta);
		if (scelta == 0) {
			break;
		}
	}
	return 0;
}

void schermoMenuLista (int &scelta) {
	cout << "\n";
	cout << "Gestione della lista" << endl;
	cout << "\n";
	cout << "1. Leggi la lista" << endl;
	cout << "2. Stampa la lista" << endl;
	cout << "\n";
	cout << "0. Per uscire" << endl;
	cout << "\n";
	convalidaDati ("Scelta --> ", scelta, 2, 0);
	sceltaFile (scelta);
}

void convalidaDati (string messaggio, int &valore, int massimo, int minimo) {
	cout << messaggio;
	cin >> valore;
		while ((valore < minimo) || (valore > massimo)) {
			cout << "Errore, immetti un numero compreso tra " << minimo << " e " << massimo << endl;
			cout << "\n" << messaggio;
			cin >> valore;
		}
	return;
}

void sceltaFile(int &scelta) {
switch (scelta) {
	case 1: {
		string riga;
		//Input File Stream. Flusso di dati in input nella RAM, che va dal file interessato fino alla memoria centrale.
		//Operazioni di lettura. ifstream è la classe, input è l'istanza.
		ifstream input ("lista.txt");
		if (!input) {
			cout << "Errore durante l'apertura del file" << endl;
		} else {
				//finchè nella variabile input esistono righe andro a stampare il contenuto di esso.
			while (input >> riga) {
			cout << riga << endl;
			}
		}
	}

break;

	case 2: {
		string nome;
		//Output File Stream. Flusso di dati in output dalla RAM, che va alla memoria centrale fino al nostro file.
		/*Operazioni di scrittura. ofstream è la classe, output è l'istanza. ios::app serve per idicare che quando scrivo qualcosa 
		all'interno del file non sovrascrivero il contenuto già esistente.*/
		ofstream output ("lista.txt", ios::app);
		if (!output) {
			cout << "Errore durante l'apertura del file" << endl;
		} else {
			cout << "Inserisci qualcosa nella lista: ";
			cin >> nome;
			output << nome << "\n";
		}
		output.close ();
	}
break;
system ("pause");
} 
}