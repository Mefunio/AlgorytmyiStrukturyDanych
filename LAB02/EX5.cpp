#include <iostream>
using namespace std;

int main() {

    int array[4], a = 0, wynik = 0;


    cout << "Podaj liczbe (4 cyfrowa): ";
    cin >> a;

    for (int i = 4; i > 0; i--) {

        array[i-1] = a % 10;
        a = a / 10;

    }

    wynik = array[0] + array[1] + array[2] + array[3];

    cout << "Suma cyfr jest rowna = " << wynik;

    return 0;
}