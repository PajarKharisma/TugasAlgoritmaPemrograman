#include <iostream>
using namespace std;

void printArray(int *p){
    for(int i=0; i<5; i++){
        cout << *p << " ";
        p++;
    }
    cout << endl;
}

int main() {
    int angka[5] = {1,2,3,4,5};
    int * pointer;
    pointer = angka;
    // cout A
    cout << endl;
    cout<<angka<<" vs "<<pointer<<endl;
    
    cout << "========== Array Angka Sebelum Operasi X ==========" << endl;
    printArray(angka);

    //operasi X
    for(int i=0;i<5;i++){
         if(i==2)
            cout<<"angka ke-"<<i<<":"<<angka[i]<<" vs "<<"pointer:"<<*pointer<<endl;
        *pointer = *pointer * 2;
        pointer++;
    }
    // cout B
    cout<<angka<<" vs "<<pointer<<endl<<endl;
    cout << "========== Array Angka Setelah Operasi X ==========" << endl;
    printArray(angka);
    return 0;
}