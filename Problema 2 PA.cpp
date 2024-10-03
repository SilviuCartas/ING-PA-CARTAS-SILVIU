#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	vector<int> lista;
	cout << "Introduceti numarul de elemente din lista: ";
	cin >> n;
	cout << "Introduceti elementele listei: ";
	for (int i = 0; i < n; i++) {
		int numar;
		cin >> numar;
		lista.push_back(numar);
	}
	int suma = 0;
	for (int i = 0; i < n; i++) {
		suma += lista[i];
		double media = static_cast<double>(suma) / n;
		cout << "Suma elementelor este: " << suma << endl;
		cout << "Media elementelor este: " << media << endl;
		return 0;
	}
}
