#include <iostream>
using namespace std;

int main(){
    int tahun;
    cout << "Masukan tahun lahir : ";
    cin >> tahun;
    int usia = 2019 - tahun;
    if(usia < 5){
        int bulan;
        cout << "Masukan bulan lahir : ";
        cin >> bulan;
        int usiaBulan = bulan - 2;
        if(usiaBulan < 0)
            cout << "Usia anda adalah " << usia << " tahun lebih " << abs(usiaBulan) << " bulan" << endl;
        else
            cout << "Usia anda adalah " << usia << " tahun kurang " << abs(usiaBulan) << " bulan" << endl;
    }else{
        cout << "Usia anda sekarang adalah : " << usia << endl;
    }
    
    return 0;
}