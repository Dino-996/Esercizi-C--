//Preambolo
#include <iostream>
using namespace std;
int main () {
//Dichiarazioni
float lato, area;
int i;
i = 0;
//Operazioni
while (i < 5) {
cout << “Immetti la lunghezza del lato” << endl;
cin >> lato;
area = lato * lato;
cout << “Area quadrato: ” << area << endl; 
i++;
}
cout << “Fine” << endl;
return 0;
}