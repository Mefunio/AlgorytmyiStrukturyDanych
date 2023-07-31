#include <iostream>
#include <string>
using namespace std;
string szyfruj(string tekst, int klucz) {
string szyfr = "";
int ASCII;
char znak;
for (int i = 0; i < tekst.length(); i++) { //Pętla trwa przez ilość literek
ASCII = (int)tekst[i] + klucz;
if (ASCII > 122) ASCII -= 26; //zawijanie alfabetu
else if ((ASCII > 90 and ASCII < 97)) ASCII -= 26;
znak = (char) ASCII; //Nowa literka jest przypisywana znakowi
szyfr += znak; //Dodanie znaku do string szyfr
}
return szyfr;
}
string deszyfruj(string szyfer, int klucz) {
string tekst = "";
int kod_ascii;
char znak;
for (int i = 0; i < szyfer.length(); i++) {
kod_ascii = (int)szyfer[i] - klucz;
if (kod_ascii < 97 and kod_ascii > 90) kod_ascii += 26;
else if (kod_ascii < 65 ) kod_ascii += 26;
znak = (char) kod_ascii;
tekst += znak;
}
return tekst;
}
int main()
{
string text;
int klucz;
bool encrypt;
cout << "Wpisz tekst do zaszyfrowania lub odszyfrowania: ";
getline(cin, text);
cout << "Wpisz klucz (1-25): ";
cin >> klucz;
cout << "szyfruj (1) lub deszyfruj (0): ";
cin >> encrypt;
if (encrypt == 1) {
cout << "Zaszyfrowane: " << szyfruj(text, klucz) << endl;
}
else {
cout << "Zdeszyfrowane: " << deszyfruj(text, klucz) << endl;
}
return 0;
}
