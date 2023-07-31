#include <iostream>
#include <vector>
using namespace std;
void menu_pol();
int main() {
 bool loop = true;
 char ins;
 cout << "Tworzymy wektor" << endl;
 vector<int> wektor;
 while (loop) {
 menu_pol();
 cin >> ins;
 int i=0;
 switch(ins) {
 case 'd':
 cout<<"Podaj liczbę jaką chcesz dodać do wektora:\n";
 cin>>i;
 wektor.push_back(i);
 break;
 case 'u':
 cout<<"Usunięcie elementu na końcu wektora:\n";
 wektor.pop_back();
 break;
 case 'p':
 cout<<"Wartości skrajne:\n";
 cout<<"Element pierwszy: "<<wektor.front()<<endl;
 cout<<"Element ostatni: "<<wektor.back()<<endl;
 break;
 case 'n':
 cout<<"Podaj który chcesz wybrać element z wektora:\n";
 cin>>i;
 cout<<i<<" element wektora:";
 cout<<wektor[i-1]<<endl;
 break;
 case 's':
 cout<<"Szukaj elementu:\n";
 cin>>i;
 if (count(wektor.begin(), wektor.end(), i)>0) {
 cout << "Element znajduje się w wektorze\n";
 }
 else{
 cout<<"Podany element nie znajduje się w wektorze\n";
 }
 break;
 case 'w':
 cout<<"Wielkość wektora: ";
 cout<<wektor.size()<<endl;
 break;
 case 'e':
 cout<<"Czy wektor jest pusty?:\n";
 if(wektor.empty()){
 cout<<"Wektor jest pusty";
 }
 else{
 cout<<"Wektor nie jest pusty";
 }
 break;
 case 'x':
 cout<<"Wyjście z programu";
 loop=0;
 break;
 default:
 cout<<"Wprowadzono złą opcję!";
 loop=0;
 break;
 }
 }
 return 0;
}
 void menu_pol(){
 cout << "Podaj instrukcję:" << endl;
 cout << "d - dodaj element na koniec wektora " << endl;
 cout << "u - usuń element z końca wektora" << endl;
 cout << "p - wyświetl wartości skrajne" << endl;
 cout << "n - Wyświetl n-ty elemnet z wektora" << endl;
 cout << "s - Sprawdź czy element należy do struktury" << endl;
 cout << "w - Pokaż wielkość wektora" << endl;
 cout << "x - Wyjdź z programu" << endl;
 }
