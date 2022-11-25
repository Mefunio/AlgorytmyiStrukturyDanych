#include <iostream>
using namespace std;

void print(int tablica[], int rozmiar) {
    for(int i = 0; i < rozmiar; i++)
        cout << tablica[i] << " ";
    cout << endl;
}
void sort(int tablica[], int rozmiar) {
    int i, j, min;
    for(i = 0; i < rozmiar - 1; i++) {            
        min = i;
        for(j = i+1; j < rozmiar; j++)            
            if(tablica[j] < tablica[min])         
                min = j;
        swap(tablica[i], tablica[min]);      
    }
}
int main() {
    setlocale(LC_CTYPE, "Polish");

    int n;
    cout << "Wprowadź liczbę elementów: ";
    cin >> n;
    int tab[n];

    for(int i = 0; i<n; i++) {
        cout << "Wprowadź element " << i+1 <<": " << endl;
        cin >> tab[i];
    }
    cout << "Tablica nieposortowana: ";
    print(tab, n);

    cout << "Tablica posortowana: ";
    sort(tab, n);
    print(tab, n);

    return 0;
}
