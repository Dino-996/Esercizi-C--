//Preambolo
#include <iostream>
using namespace std;
int main () {
	//Dichiarazioni
	int voto, sommaVoti, numeroEsami;
	float media;
	bool continua;
	continua = true;
	numeroEsami = 0;
	sommaVoti = 0;
//Operazioni
	while (continua == true) {
		cout << "Immetti il voto (0 per fermarti)" << endl;
		cin >> voto;
		if (voto == 0) {
			continua = false;
		} else {
			numeroEsami++;
			sommaVoti += voto;
		}
	}
		if (numeroEsami > 0) {
		media = ((float)sommaVoti) / numeroEsami;
		cout << "La media vale: " << media << endl;
	} else {
			cout << "Non hai fornito nessun voto" << endl;
		}	
return 0;
}
