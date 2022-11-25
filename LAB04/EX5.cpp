#include <iostream>
using namespace std;

int main(){
    char tekst[30];
    int i, len;
    int licznik = 0;


    cout << "Wprowadz tekst: ";
    cin >> tekst;

    len = strlen(tekst);

    /* Pętla porównuje ze sobą kolejno odpowiednie znaki, gdy znaki nie będą się zgadzać, pętla zosanie
       przerwana, a licznik zostanie ustawiony na 1*/

    for(i=0;i < len ;i++){
        if(tekst[i] != tekst[len - i - 1]){
            licznik = 1;
            break;
        }
    }

    if (licznik == 1) {
        cout << tekst << " nie jest palindromem" << endl;
    }
    else {
        cout << tekst << " jest palindromem" << endl;
    }
    return 0;
}
