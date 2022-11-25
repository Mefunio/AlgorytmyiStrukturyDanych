#include <iostream>
using namespace std;


int main()
{                                              // Srednia Wazona = w1 * x1 + ... + wn * xn  /  w1 + ... + wn

    int ilosc, oceny;
    double srednia, suma, suma2;
    double ocena [20], waga [20];


    cout << "Podaj ilosc ocen: ";
    cin >> ilosc;

    for(oceny=1; oceny <= ilosc ; oceny ++)
    {

        cout << "Podaj " << oceny << " ocene: ";
        cin >> ocena [oceny];
        cout << "Podaj wage:  ";
        cin >> waga [oceny];

        suma+= ocena[oceny] * waga[oceny];
        suma2+=waga[oceny];
    }


    srednia = suma / suma2;

    cout << "Srednia wynosi: " << srednia << endl;
    return 0;
}
