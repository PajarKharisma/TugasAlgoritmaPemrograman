#include <iostream>
using namespace std;

int faktorial(int n){
    if (n == 1){
        return 1;
    }else{
        return n * faktorial(n-1);
    }
}

int main(){
    int n;
    cout << "Inputkan nilia n : ";
    cin >> n;
    int hasil = faktorial(n);
    cout << "Nilai faktorial adalah : " << hasil << endl;
    return 0;
}