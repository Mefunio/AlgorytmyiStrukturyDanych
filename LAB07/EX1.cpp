#include <iostream>
using namespace std;

void merge_sort(int a[], int length);
void recursion(int a[], int l, int r);
void sorted(int a[], int l, int m, int r);

int main(){
    setlocale(LC_CTYPE, "Polish");

    int length;
    cout << "Wprowadź liczbę elementów: ";
    cin >> length;
    int array[length];

    for(int i = 0; i < length; i++) {
        cout << "Wprowadź element " << i+1 <<": " << endl;
        cin >> array[i];
    }

    merge_sort(array, length);

    for (int i = 0; i < length; i++) {

        cout << array[i];

    }
    cout << endl;

    return 0;
}

void merge_sort(int a[], int length){

    recursion(a, 0, length - 1);

}

void recursion(int a[], int l, int r){

    if (l < r) {
        int m = l + (r - l) / 2;

        recursion(a, l, m); //lewo
        recursion(a, m + 1, r); //prawo

        sorted(a, l, m, r);
    }
}

void sorted(int a[], int l, int m, int r){

    int left_length = m - l + 1;
    int right_length = r - m;

    int temp_left[left_length];
    int temp_right[right_length];

    int i, j, k;

    for (int i = 0; i < left_length; i++)
        temp_left[i] = a[l+i];

    for (int i = 0; i < right_length; i++)
        temp_right[i] = a[m+1+i];


    for (i=0, j=0, k=l; k<=r; k++){

        if ((i < left_length) && (j >= right_length || temp_left[i] <= temp_right[j])){

            a[k] = temp_left[i];
            i++;

        }
        else{

            a[k] = temp_right[j];
            j++;

        }
    }
}