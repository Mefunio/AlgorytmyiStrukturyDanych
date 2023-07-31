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


    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(v[j] > v[j + 1])
            {
                tym = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tym;
            }
        }
    }



    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    time_taken /= 1000000;

    cout << "Time taken by Bubble Sort is : " << time_taken;
    cout << " ms" << endl;
    cout << endl;



    ofstream wynik;
    wynik.open("/Users/mefunio/Studia/AISD/wyniki/bubble/wynik1.txt");


    wynik << "Time taken by Bubble Sort is : " << time_taken;
    wynik << " sec" << endl;
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
