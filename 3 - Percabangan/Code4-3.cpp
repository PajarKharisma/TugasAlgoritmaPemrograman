#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Input sembarang bilangan bulat positif : ";
    cin >> x;
    int i = x;
    int sum = 0;
    cout << "Cacah bilangan adalah : ";
    while(i>0){
        sum += i;
        cout << i << " ";
        i--;
    }
    cout << endl;
    cout << "Penjumlahan cacah bilangan adalah : " << sum << endl;
    return 0;
}