#include <iostream>

using namespace std;

// Struktura reprezentująca pojedynczy element stosu
struct element {
    int value;
    element* next;
};

// Struktura reprezentująca cały stos
struct stos {
    element* head;
};

// Inicjalizacja pustego stosu
void init(stos& s) {
    s.head = nullptr;
}

// Sprawdzenie, czy stos jest pusty
// Const oznacza, że funkcja nie może zmieniać stanu kolejki,
// co oznacza, że nie może dodawać lub usuwać elementów ani modyfikować ich wartości.
// Jest to ważne, ponieważ zapobiega to niepożądanym zmianom w stanie kolejki podczas jej wyświetlania.
bool isEmpty(const stos& s) {
    return s.head == nullptr;
}

// Dodanie elementu do stosu
void add(stos& s, int value) {
    auto item = new element{ value, s.head }; // auto samo ustala typ zmiennej
    s.head = item;
}

// Pobranie elementu ze stosu
int pobierz(stos& s) {

    auto item = s.head;
    int value = item->value; //wyswietl value
    cout << item->value;
    s.head = item->next;
    delete item;
    return value;

}

// Wypisanie zawartości stosu, pętla iteruje przez elementy stosu,
// aż do momentu, gdy item jest równe nullptr, czyli nie ma już więcej elementów na stosie.
// W każdej iteracji pętli wypisywana jest wartość elementu i ustawiany jest wskaźnik item na element pod nim.
void print(const stos& s) {
    cout << "Zawartość stosu: ";
    for (auto item = s.head; item != nullptr; item = item->next) {
        cout << item->value << " ";
    }
    cout << endl;
}

int main() {
    stos s;
    init(s);

    cout << "Podaj jedną z instrukcji:\n"
         << "d - aby dodać liczbę do stosu\n"
         << "u - aby usunąć liczbę ze stosu\n"
         << "w - aby wyświetlić zawartość stosu\n"
         << "x - aby zakończyć\n";

    char wybor;
    bool exit = true;
    while (exit) {
        cin >> wybor;
        switch (wybor) {

            case 'd':
                while (true) {
                    cout << "Podaj liczbę (0 - zakończ wprowadzanie): ";
                    int value;
                    cin >> value;
                    if (value == 0) {
                        break;
                    }
                    add(s, value);
                    print(s);
                }
                break;
            case 'u':
                if (isEmpty(s)) {
                    cout << "Stos jest pusty, nie można usunąć elementów." << endl;

                    print(s);
                }
                else {
                    cout << "Ile elementów chcesz usunąć ze stosu? ";
                    int count;
                    cin >> count;

                    for (int i = 0; i < count; i++) {
                        pobierz(s);
                        cout << " ";
                    }
                    cout << " Zostało usunięte!" << endl;
                }
                break;
            case 'w':
                print(s);
                break;
            case 'x':
                exit = false;
                break;
        }
    }
    return 0;
}
