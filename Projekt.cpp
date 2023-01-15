#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;

    if (a == 0) {
        cout << "Funkcja jest liniowo zale¿na, nie ma miejsc 0.";
    }
    else {
        double x = -b/a;
        cout << "Miejsce 0 funkcji to: " << x;
    }

    return 0;
}
