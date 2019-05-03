#include <iostream>
using namespace std;

void cetak(int a, int b){
    cout << "Cacah : " << a << endl;
    if(a>1)
        cetak(a-b,b);
}

int main(){
    int x = 13;
    int y = 5;
    cetak(x,y);
    return 0;
}