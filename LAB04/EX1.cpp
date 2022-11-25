#include<iostream>
using namespace std;

bool doskonala(int nope){     /*Sprawdzenie, czy liczba jest doskonala, czy nie. Jako argument przyjmuje
                                jedną liczbę i zwraca jedną wartość logiczną.*/

    int i = 0;
    int suma = 0;

    while(i++ < nope){        /*Pętla while sluży do obliczenia sumy wszystkich dzielników.
                                Jeśli suma jest równa liczbie, zwróci true.
                                W przeciwnym razie zwróci fałsz. */

        if (nope % i == 0 && i < nope){

            suma += i;


        }
    }
    return suma == nope;
}

int main()
{
    int min = 2, max = 30;


   cout << "Liczby doskanale w zakresie od " << min <<" do " << max << endl;

   for (int i = min; i <= max; i++){     /* Używając jednej pętli for, iteruje od początku do końca, i dla każdej
                                            liczby wywołuje funkcję, aby sprawdzić, czy jest doskonała, czy nie.
                                            Jeśli jest doskonała, wyświetla ją, natomiast gdy nie jest doskonała
                                            pomija ją. */

       if (doskonala(i) == true) {

           cout << i << endl;

       }

   }


    return 0;
}