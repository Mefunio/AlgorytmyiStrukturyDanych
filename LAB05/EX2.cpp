#include<iostream>

using namespace std;

int main()
{
    int i,j,n,tym,tab[10];
    cout<<"Wprowadz liczbe elementow:";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout << "Wpisz liczbe " << i+1 << ": ";
        cin >> tab[i];
    }

    for(i=1;i<=n-1;i++)
    {
        tym=tab[i];
        j=i-1;

        while((tym < tab[j]) && (j >= 0))
        {
            tab[j + 1]=tab[j];
            j=j-1;
        }

        tab[j + 1]=tym;
    }

    cout<<"Posortowany zbior:\n";
    for(i=0;i<n;i++)
    {
        cout << tab[i] << " ";
    }

    return 0;
}
