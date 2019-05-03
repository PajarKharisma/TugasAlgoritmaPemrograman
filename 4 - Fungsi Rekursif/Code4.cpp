#include <iostream>
using namespace std;

int fibonaci(int x){
    if(x==1 || x==2){
        return 1;
    }else{
        return fibonaci(x-1) + fibonaci(x-2);
    }
}

int main(){
    int n;
    cout << "Input nilai N : ";
    cin >> n;
    int hasil = fibonaci(n);
    cout << "Deret fibonaci ke-" << n << " adalah " << hasil << endl;
    return 0;
}