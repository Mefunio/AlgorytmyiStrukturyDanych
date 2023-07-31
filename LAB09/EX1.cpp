#include <iostream>

using namespace std;

// Pojedynczy element kolejki
struct element {
    int value;
    element* next;
};

// Cała kolejka
struct kolejka {
    element* head;
    element* tail;
};

// Inicjalizacja pustej kolejki
void init(kolejka& q) {
    q.head = nullptr;  // nullptr - wskaznik pusty
    q.tail = nullptr;
}

// Sprawdzenie, czy kolejka jest pusta
bool isEmpty(const kolejka& q) {
    return q.head == nullptr;
}

// Dodanie elementu do kolejki
void add(kolejka& q, int value) {
    auto item = new element{value, nullptr };  //auto sam ustala typ zmiennej
    if (isEmpty(q)) {
        q.head = item;
        q.tail = item;
    }
    else {
        q.tail->next = item;
        q.tail = item;
    }
}

// Pobranie elementu z kolejki
int pobierz(kolejka& q) {

    auto item = q.head;
    int value = item->value;
    q.head = item->next;
    if (q.head == nullptr) {
        q.tail = nullptr;
    }
    delete item;
    return value;
}

// Wypisanie zawartości kolejki
void print(const kolejka& q) {
    cout << "Zawartość kolejki: ";
    for (auto item = q.head; item != nullptr; item = item->next) {
        cout << item->value << " ";
    }
    cout << endl;
}

int main() {
    kolejka q;
    init(q);


    cout <<"Podaj jedna z instrukcji:\n"
         <<"d - aby dodac napis do kolejki\n"
         <<"u - aby usunac napis z kolejki\n"
         <<"w - aby wyswietlic zawartosc kolejki\n"
         <<"x - aby zakonczyc\n";

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
                add(q, value);
            }
            break;

        case 'u':
            if (isEmpty(q)) {
                cout << "Kolejka jest pusta, nie można usunąć elementów." << endl;

                print(q);
            }
            else {
                cout << "Ile elementów chcesz usunąć z kolejki? ";
                int count;
                cin >> count;

                for (int i = 0; i < count; i++) {
                    pobierz(q);
                }
            }
            break;

        case 'w':
            print(q);
            break;

        case 'x':
            exit=false;
            break;


    }
}
return 0;
}
