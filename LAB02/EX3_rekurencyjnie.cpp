#include <iostream>
using namespace std;

int silnia(int n) {

    if (n <= 0) {

        return 1;

    }
    else {

        return n * silnia(n-1);

    }
}

int main() {
    int n;
    cout << "Podaj n: ";
    cin >> n;

    cout << "Silnia wynosi: " << silnia(n);

    return 0;
}
