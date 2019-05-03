#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Masukkan sembarang bilangan positif : ";
    cin >> x;
    do{ 
        cout << "Nilai x sekarang:"<<x<<"\n";
        x = x - 2; // kurangi 2 dari x
    }while(x > 10);

}