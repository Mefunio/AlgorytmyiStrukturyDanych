#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int n, pojemnik, pojemnik2, z = 0, z2 = 0, reszta, reszta2, i = 1, i2  = 0;
    cout << "Wprowadz liczbe dziesietna: ";
    cin >> n;

    while (n!=0) {
        reszta = n % 2;
        n /= 2;
        z += reszta * i;
        i *= 10;
    }

    pojemnik = z;
    cout << "Liczba Binarna: " << pojemnik << endl;

    while (pojemnik!=0) {

        reszta2 = pojemnik % 10;
        pojemnik /= 10;
        z2 += reszta2 * pow(2, i2);
        i2++;

    }

    pojemnik2 = z2;
    cout << "Liczba Dziesietna: " << pojemnik2 << endl;

    return 0;
}
