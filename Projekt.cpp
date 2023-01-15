#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;

 if (a == 0) {
        if(b == 0) 
            cout << "Funkcja posiada nieskoñczenie wiele miejsc 0.";
        else
            cout << "Funkcja nie posiada miejsc 0.";
    }
    else {
        double x = -b/a;
        cout << "Miejsce 0 funkcji to: " << x;
    }

    return 0;
}
