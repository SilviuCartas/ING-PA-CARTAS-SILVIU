
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Introduceti coeficientul a:";
    cin >> a;
    cout << "Introduceti coeficientul b:";
    cin >> b;
    cout << "Introduceti coeficientul c:";
    cin >> c;
    double delta = b * b - 4 * a * c;
    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Ecuatia are doua solutii reale distincte: x1 = " << x1 << "si x2 = " << x2 << endl;
    }
    else {
        double parteReala = -b / (2 * a);
        double parteImaginara = sqrt(-delta) / (2 * a);
        cout << "Ecuatia are doua solutii complexe: " << endl;
        cout << "x1 = " << parteReala << "+" << parteImaginara << "i" << endl;
        cout << "x2 = " << parteReala << "-" << parteImaginara << "i" << endl;
    }
    return 0;
}
    

