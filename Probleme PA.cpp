
#include <iostream>
using namespace std;

int cmmdc(int a, int b) {
    int divizor = (a < b) ? a : b;
    while (divizor > 0) {
        if (a % divizor == 0 && b % divizor == 0) {
            return divizor;
        }
        divizor--;
    }
    return 1;
}

int main()
{
    int num1, num2;
    cout << "Introduceti primul numar:";
    cin >> num1;
    cout << "Introduceti al doilea numar: ";
    cin >> num2;
    int rezultat = cmmdc(num1, num2);
    cout << "Cout cel mai mare divizor comun este: " << rezultat << endl;
    return 0;
}
