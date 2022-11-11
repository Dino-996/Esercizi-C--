# include <iostream>

using namespace std;

int main()

{

	int i, j, prodotto;

	cout << "Tavola pitagorica 5x5" << endl;

	for (i=1; i<=5; i++) {

		for (j=1; j<=5; j++) {

			prodotto = i*j;

			cout << prodotto << endl;

		}

	}

return 0;

}
