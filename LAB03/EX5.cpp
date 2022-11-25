#include <iostream>

using namespace std;

int main()
{
    int num, zgad, proby = 0;
    srand(time(0));
    num = rand() % 15 + 1;

    do
    {
        cout << "Wprowadz liczbe miedzy 1 a 15 : ";
        cin >> zgad;
        proby++;

        if (zgad > num)
            cout << "Za wysoko!\n\n";
        else if (zgad < num)
            cout << "Za nisko!\n\n";
        else
            cout << "\nDobrze! Trafiles za: " << proby << " razem!\n";
    } while (zgad != num);

    return 0;
}
