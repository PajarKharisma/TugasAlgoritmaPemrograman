#include <iostream>
#define A 3
using namespace std;

int arr_a[3] = {1,2,3};
int arr_b[] = {2,3,4};
int arr_c[5];

void print(int arr[], int n, char name){
    cout << "============ CETAK ARRAY " << name << " ============" << endl;
    for(int i=0; i<n; i++){
        cout << "arr_[" << name << "]" << " = " << arr[i] << endl;
    }
    cout << "============================" << endl;
}

int main() {
    arr_c[0] = A;
    arr_c[A] = 2;

    arr_c[1] = arr_b[1];
    arr_a[arr_a[1]] = arr_a[1];
    arr_c[5] = 10;
    arr_b[3] = arr_c[3];
    
    int arrSizeA = sizeof(arr_a)/sizeof(arr_a[0]);
    int arrSizeB = sizeof(arr_b)/sizeof(arr_b[0]);
    int arrSizeC = sizeof(arr_c)/sizeof(arr_c[0]);

    print(arr_a, arrSizeA, 'a');
    print(arr_b, arrSizeB, 'c');
    print(arr_c, arrSizeC, 'c');

    return 0;
}