#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Podaj A: ";
    cin >> a;
    cout << "Podaj B: ";
    cin >> b;
    cout << "Podaj C: ";
    cin >> c;

    if (a == 0 && b == 0) {
        if(c == 0) 
            cout << "Funkcja jest to¿sama z 0, ma nieskoñczenie wiele miejsc 0.";
        else
            cout << "Funkcja jest liniowo zale¿na, nie ma miejsc 0.";
    }
    else if (a == 0 && b != 0) {
        double x = -c/b;
        cout << "Miejsce zerowe funkcji to: (0, " << x << ")";
    }
    else if (b == 0 && a != 0) {
        double x = -c/a;
        cout << "Miejsce zerowe funkcji to: (" << x << ", 0)";
    }
    else {
        double delta = b*b - 4*a*c;
        if(delta < 0) 
            cout << "Funkcja nie ma rozwi¹zañ rzeczywistych.";
        else if(delta == 0){
            double x = -b/(2*a);
            cout << "Funkcja ma jedno miejsce 0: (" << x << ", 0)";
        }
        else{
            double x1 = (-b + sqrt(delta))/(2*a);
            double x2 = (-b - sqrt(delta))/(2*a);
            cout << "Funkcja ma dwa miejsca 0: (" << x1 << ", 0) oraz (" << x2 << ", 0)";
        }
    }

    return 0;
