#include<iostream>
using namespace std;
int main()
{
    int n, i, tablica[50], j, tym;
    cout<<"Wpisz rozmiar tablicy: ";
    cin>>n;

    for(i=0; i<n; i++) {
        cout << "Wpisz liczbe " << i+1 << ": ";  //Wpisywanie po kolei kolejnych elementow do tablicy
        cin >> tablica[i];
    }
    for(i=0; i<(n-1); i++)    //Sprawdzanie czy warunek n-1 jest spełniony
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(tablica[j] > tablica[j + 1])  //Jeśli liczba jest większa od następnej
            {
                tym = tablica[j];             //Przechowujemy starą liczbę i zastępujemy nową
                tablica[j] = tablica[j + 1];
                tablica[j + 1] = tym;         //Nowa liczba zostaje tymczasowo przechowana
            }
        }
    }
    cout<<"\nPosortowana tablica: \n";
    for(i=0; i<n; i++)                   //Wypisywanie calej posortowanej tablicy
        cout << tablica[i] << " ";
    cout<<endl;
    return 0;
}