using namespace std;

int main() {
    int choice;
    cout << "Wybierz rodzaj funkcji: \n1. Funkcja liniowa\n2. Funkcja kwadratowa\n";
    cin >> choice;

    if (choice == 1) {
        double a, b;
        cout << "Podaj A: ";
        cin >> a;
        cout << "Podaj B: ";
        cin >> b;
        if (a == 0) {
            if(b == 0) 
                cout << "Funkcja jest to¿sama z 0, ma nieskoñczenie wiele miejsc 0.";
            else
                cout << "Funkcja jest liniowo zale¿na, nie ma miejsc 0.";
        }
        else {

            double x = -b/a;
            cout << "Miejsce 0 funkcji to: " << x;
        }
    }
    else {

    else if (choice == 2) {
        double a, b, c;
        cout << "Podaj A: ";
        cin >> a;
        cout << "Podaj B: ";
        cin >> b;
        cout << "Podaj C: ";
        cin >> c;
        if (a == 0) {
            cout << "To nie jest funkcja kwadratowa";
        }

        else {
            double delta = b*b - 4*a*c;
            if(delta < 0) 
                cout << "Funkcja nie ma rozwi¹zañ rzeczywistych.";
            else if(delta == 0){
                double x = -b/(2*a);
                cout << "Funkcja posiada jedno miejsce 0: " << x;
            }
            else{
                double x1 = (-b + sqrt(delta))/(2*a);
                double x2 = (-b - sqrt(delta))/(2*a);
                cout << "Funkcja ma dwa miejsca 0: " << x1 << " oraz " << x2;
            }
        }
    }
    else {
        cout << "Nieprawid³owy wybór. Proszê wybraæ 1 lub 2.";
    }

    return 0;
}
}
