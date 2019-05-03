#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Masukkan sembarang bilangan positif : ";
    cin >> x;
    while(x > 10){ //selama x lebih besar dari 10
        cout << "Nilai x sekarang:"<< x <<"\n";
        x = x - 2; // kurangi 2 dari x
    }
    return 0;
}