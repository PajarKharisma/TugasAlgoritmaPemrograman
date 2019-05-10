#include <iostream>
#include <conio.h>
using namespace std;

bool getKabisat(int tahun){
    if((tahun % 4 == 0) && (tahun % 100 != 0)){
        return true;
    }else if((tahun % 4 == 0) && (tahun % 100 == 0) && (tahun % 400 == 0)){
        return true;
    }else{
        return false;
    }
}

int main(){
    int tahun;
    cin >> tahun;
    if(getKabisat(tahun))
        cout << tahun << " adalah tahun kabisat" << endl;
    else
        cout << tahun << " bukan merupakan tahun kabisat" << endl;    
    getch();
}