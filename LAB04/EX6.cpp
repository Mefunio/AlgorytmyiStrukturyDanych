#include <iostream>

using namespace std;

int main()
{
    int jeden, dwa, trzy, cztery, piec, szesc, siedem, osiem, dziewiec, dziesiec, jedenascie;
    int suma;

    cout << "Podaj 1 cyfre PESELU: ";
    cin >> jeden;
    jeden *=1;
    cout << endl;

    cout << "Podaj 2 cyfre PESELU: ";
    cin >> dwa;
    dwa *=3;
    cout << endl;

    cout << "Podaj 3 cyfre PESELU: ";
    cin >> trzy;
    trzy *=7;
    cout << endl;

    cout << "Podaj 4 cyfre PESELU: ";
    cin >> cztery;
    cztery *=9;
    cout << endl;

    cout << "Podaj 5 cyfre PESELU: ";
    cin >> piec;
    piec *=1;
    cout << endl;

    cout << "Podaj 6 cyfre PESELU: ";
    cin >> szesc;
    szesc *=3;
    cout << endl;

    cout << "Podaj 7 cyfre PESELU: ";
    cin >> siedem;
    siedem *=7;
    cout << endl;

    cout << "Podaj 8 cyfre PESELU: ";
    cin >> osiem;
    osiem *=9;
    cout << endl;

    cout << "Podaj 9 cyfre PESELU: ";
    cin >> dziewiec;
    dziewiec *=1;
    cout << endl;

    cout << "Podaj 10 cyfre PESELU: ";
    cin >> dziesiec;
    dziesiec *=3;
    cout << endl;

    cout << "Podaj 11 cyfre PESELU: ";
    cin >> jedenascie;
    jedenascie *=1;
    cout << endl;

    suma = jeden + dwa + trzy + cztery + piec + szesc + siedem + osiem + dziewiec + dziesiec + jedenascie;

    if (suma % 10 == 0) {
        cout << "Suma cyfr wynosi: " << suma << endl;
        cout << "PESEL jest poprawny" << endl;
    }
    else {

        cout << "Suma cyfr wynosi: " << suma << endl;
        cout << "PESEL jest niepoprawny" << endl;

    }

    return 0;

}

