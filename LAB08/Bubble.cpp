#include <iostream>
#include <chrono>
#include <fstream>


using namespace std;

int main() {

    int i,j,tym;

    int n = 2000; //Rozmiar

    ifstream in;
    in.open("/Users/mefunio/Studia/AISD/liczby/pes_2000liczb.txt");

    int v[n];
    int element;

    if (in.is_open()) {
        int i = 0;
        while (in >> element) {
            v[i++] = element;
        }
    }

    in.close();

    auto start = chrono::high_resolution_clock::now();

    ios_base::sync_with_stdio(false);


    for(i=1;i<=n-1;i++)
    {
        tym=v[i];
        j=i-1;

        while((tym < v[j]) && (j >= 0))
        {
            v[j + 1]=v[j];
            j=j-1;
        }

        v[j + 1]=tym;
    }


    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    time_taken /= 1000000;

    cout << "Time taken by Insertion Sort is : " << time_taken;
    cout << " ms" << endl;
    cout << endl;



    ofstream wynik;
    wynik.open("/Users/mefunio/Studia/AISD/wyniki/insertion/wynik.txt");


    wynik << "Time taken by Insertion Sort is : " << time_taken;
    wynik << " ms" << endl;
    wynik << endl;

    wynik<<"Sorted:\n";
    for(i=0;i<n;i++)
    {
        wynik << v[i] << " ";
        wynik << endl;
    }


    wynik.close();



    return 0;
}
