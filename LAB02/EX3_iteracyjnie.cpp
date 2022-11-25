#include <iostream>
using namespace std;

int main() {

    int n;
    int silnia = 1;

    cout << "Podaj n: ";
    cin >> n;

    for (int i = n; i > 1; i--) {

        silnia *= i;

    }

    cout << "Silnia: " << silnia;

    return 0;
}
