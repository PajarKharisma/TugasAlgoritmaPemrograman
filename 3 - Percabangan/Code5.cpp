#include <iostream>
using namespace std;

int faktorial(int n){
    if(n > 0){
        return n * faktorial(n-1);
    }
    else{
        return 1;
    }
}

int main(){
    int n;
    cout << "Masukan nilai N : ";
    cin >> n;
    cout << "Faktorial : " << faktorial(n) << endl;
    return 0;
}