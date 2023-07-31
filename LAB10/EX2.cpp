#include <iostream>

using namespace std;

// Struktura reprezentująca pojedynczy element stosu
struct element {
    float value;
    element* next;
};

// Struktura reprezentująca cały stos
struct stos {
    element* head;
};

// Czy znak?
bool znak(char c) {
    string valid_operators = "+-*/";
    return valid_operators.find(c) != string::npos;
}

// Inicjalizacja pustego stosu
void init(stos& s) {
    s.head = nullptr;
}

// Dodanie elementu do stosu

void add(stos& s, float value) {
    auto item = new element{ value, s.head };
    s.head = item;
}

// Pobranie elementu ze stosu
float pobierz(stos& s) {

    auto item = s.head;
    float value = item->value;
    s.head = item->next;
    delete item;
    return value;

}

float ONP(string wyrazenie) {
    stos s;
    init(s);

    for (char c : wyrazenie) {
        if (isdigit(c)) {
            // Jeśli znak jest cyfrą, dodajemy go do stosu
            add(s, c - '0');
        }
        else if (znak(c)) {
            // Jeśli znak jest operatorem, pobieramy dwie ostatnie liczby ze stosu i obliczamy wartość

            float b = pobierz(s);
            float a = pobierz(s);

            float result;
            switch (c) {
                case '+':
                    result = a + b;
                    break;
                case '-':
                    result = a - b;
                    break;
                case '*':
                    result = a * b;
                    break;
                case '/':
                    result = a / b;
                    break;
            }

            // Dodajemy wynik do stosu
            add(s, result);
        }
    }

    // Pobieramy wynik z wierzchołka stosu
    return pobierz(s);
}

int main() {
    stos s;
    init(s);

    cout << "Podaj jedną z instrukcji:\n"
         << "o - licz wyrażenie ONP\n"
         << "x - aby zakończyć\n";

    char wybor;
    bool exit = true;
    while (exit) {
        cin >> wybor;
        switch (wybor) {

            case 'o': {
                cout << "Podaj wyrażenie ONP: ";
                string wyrazenie;
                cin >> wyrazenie;

                cout << "Wynik: " << ONP(wyrazenie) << endl;
                break;
            }
            case 'x':
                exit = false;
                break;
        }
    }
    return 0;
}
