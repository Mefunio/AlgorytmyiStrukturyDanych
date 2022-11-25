#include <iostream>

using namespace std;

int main() {
    float a, b;
    float dodawanie, roznica, iloczyn, iloraz;
    int opcja;

    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    cout << "1.Dodawanie\n2.Odejmowanie\n3.Mnozenie\n4.Dzielenie\n";
    cout << "Wybierz rodzaj dzialania: ";
    cin >> opcja;

    switch (opcja) {
        case 1: {
            dodawanie = a + b;
            cout << "Suma wynosi: " << dodawanie << endl;
            break;
        }
        case 2: {
            roznica = a - b;
            cout << "Roznica wynosi: " << roznica << endl;
            break;
        }
        case 3: {
            iloczyn = a * b;
            cout << "Iloczyn wynosi: " << iloczyn << endl;
            break;
        }
        case 4: {
            if (b == 0)
            {
                cout << "Nie dzieli się przez zero!\n";
            }
            else
            {
                iloraz = a / b;
                cout << "Iloraz wynosi: " << iloraz << endl;
            }
            break;
        }

        default: {

            cout << "Nie poprawna opcja!" << endl;
            break;

        }

    }


    return 0;
}
