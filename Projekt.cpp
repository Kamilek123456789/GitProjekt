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

   
    if (a == 0) {
        cout << "To nie jest funkcja kwadratowa!";
    }
    else {
        double delta = b*b - 4*a*c;
        if(delta < 0) 
            cout << "Funkcja nie ma rozwi¹zañ rzeczywistych.";
        else if(delta == 0){
            double x = -b/(2*a);
            cout << "Funkcja ma jedno miejsce 0: " << x;
        }
        else{
            double x1 = (-b + sqrt(delta))/(2*a);
            double x2 = (-b - sqrt(delta))/(2*a);

            cout << "Funkcja ma dwa miejsca 0: " << x1 << " oraz " << x2;
        }
    }

    return 0;
}
