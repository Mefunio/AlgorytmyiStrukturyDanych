#include <iostream>
using namespace std;

int main() {
    int n, liczba1 = 0, liczba2 = 1, nastliczba = 0;

    cout << "Podaj n: ";
    cin >> n;

    cout << "Ciag Fibonacciego: ";


    for (int i = 1; i <= n; i++) {

        if(i == 1) {
            cout << liczba1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << liczba2 << ", ";
            continue;
        }
        nastliczba = liczba1 + liczba2;
        liczba1 = liczba2;
        liczba2 = nastliczba;

        cout << nastliczba << ", ";
    }
    return 0;
}

