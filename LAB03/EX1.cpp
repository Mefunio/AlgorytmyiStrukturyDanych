#include <iostream>
#include <cmath>
using namespace std;


bool sprawdzenie(int a, int b, int c)
{

    if (a + b <= c || a + c <= b || b + c <= a) //Najdluzszy bok musi byc krotszy niz pozostale 2//
        return false;
    else
        return true;

}


int main()
{
    int a, b, c;

    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;

    if (sprawdzenie(a, b, c)) {

        cout << "Mozna utworzyc trojkat" << endl;

        int obwod;
        float s, heron;

        s = (a+b+c)/2;
        heron = sqrt(s*(s-a)*(s-b)*(s-c)); // Wzór Herona: s=(a+b+c)/2, sqrt(s(s-a)(s-b)(s-c))
        obwod = a+b+c;

        cout << "Obwod: " << obwod << endl;
        cout << "Pole: " << heron << endl;


    }

    else
        cout << "Nie mozna";

    return 0;
}

