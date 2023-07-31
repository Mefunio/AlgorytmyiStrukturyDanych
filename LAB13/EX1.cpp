#include <iostream>
#include <string>
using namespace std;
string szyfrowanie(string text) {
string szyfr;
for (int i = 0; i < text.length(); i += 2) {
if (i + 1 < text.length()) {
// zamiana
szyfr += text[i + 1];
szyfr += text[i];
}
else{
// jeśli jest nieparzysta, dodaje ostatnią
szyfr += text[i];
}
}
return szyfr;
}
int main() {
string tekst;
cout << "Podaj tekst: ";
getline(cin, tekst);
string zaszyfrowany = szyfrowanie(tekst);
cout << "Tekst zaszyfrowany: " << zaszyfrowany << endl;
string zdeszyfrowany = szyfrowanie(szyfrowanie(tekst));
cout << "Tekst zdeszyfrowany: " << zdeszyfrowany << endl;
return 0;
}
