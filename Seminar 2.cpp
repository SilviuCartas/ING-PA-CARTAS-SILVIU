
#include <iostream>
#include <algorithm>
using namespace std;

void interschimbareSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
}
void afisareArray(int arr[], int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}
int main()
{ 
	int n;
	cout << "Introduceti numarul de elemente: ";
	cin >> n;

	int arr[190];
	cout << "Introduceti elementele: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "Sirul inainte de sortare: ";
	afisareArray(arr, n);
	interschimbareSort(arr, n);
	cout << "Sirul dupa sortare: ";
	afisareArray(arr, n);
	return 0;
}

