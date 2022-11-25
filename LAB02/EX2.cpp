#include <iostream>
using namespace std;

int NWD(int a, int b) {  // Algorytm Euklidesa - szuka największą liczbę dzielącą obie liczby bez reszty

    while (a!=b) {

        if (a > b) {
            a -= b;
        }
        else {
            b -= a;
        }

    }
    return a; // Zwracanie liczby a i b daje taki sam wynik
}

int main() {

    int a, b, NWW;

    cout << "Podaj liczbe a: ";
    cin >> a;

    cout << "Podaj liczbe b: ";
    cin >> b;


    cout << "NWD ("<< a << "," << b << ") = " << NWD(a,b) << endl;

    NWW = a * b / NWD(a,b);

    cout << "NWW ("<< a << "," << b << ") = " << NWW << endl; // Wzór na NWW: a*b/NWD


    return 0;
}