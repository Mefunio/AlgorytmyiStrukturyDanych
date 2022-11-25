#include <iostream>
using namespace std;

int main() {

    int a, n, wynik = 1;

    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        wynik *= a;

    }

    cout << "Liczba ("<<a<<") do potegi ("<<n<<") wynosi: " << wynik << endl;

    return 0;
}

