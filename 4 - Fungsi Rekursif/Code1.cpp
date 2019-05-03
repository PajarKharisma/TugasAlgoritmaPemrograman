#include <iostream>
using namespace std;

int fungsiXY(int a){
    cout << "Fungsi : " << a << endl;
    if(a<10) 
        return a + fungsiXY(a+1);
    else
        return 1;
}

int main(){
    int x = 2;
    int C = fungsiXY(x);
    cout << C << endl;
    return 0;
}