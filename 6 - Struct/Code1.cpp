#include <iostream>
using namespace std;
#define JUMLAH_MAHASISWA 14

struct Mahasiswa {
    string nama;
    int tanggal;
    int bulan;
    int tahun;
    float usia;
    int tahunMasuk;
    string fakultas;
};

int main(){
    Mahasiswa mahasiswa[JUMLAH_MAHASISWA];
    for(int i=0; i<JUMLAH_MAHASISWA; i++){
        cout << "========= INPUTKAN MAHASISWA " << (i+1) << " =========" << endl;

        cout << "Inputkan nama : ";
        cin >> mahasiswa[i].nama;
        
        cout << "Inputkan tanggal lahir : ";
        cin >> mahasiswa[i].tanggal;

        cout << "Inputkan bulan lahir : ";
        cin >> mahasiswa[i].bulan;

        cout << "Inputkan tahun lahir : ";
        cin >> mahasiswa[i].tahun;

        cout << "Inputkan usia : ";
        cin >> mahasiswa[i].usia;

        cout << "Inputkan tahun masuk : ";
        cin >> mahasiswa[i].tahunMasuk;
    }

    cout << endl << "=================== DATA MAHASISWA ===================" << endl;
    for(int i=0; i<JUMLAH_MAHASISWA; i++){
        if(mahasiswa[i].tahun % 2 != 0){
            cout << endl << "DATA MAHASISWA " << (i+1) << endl;
            cout << "Nama : " << mahasiswa[i].nama << endl;
            cout << "Tangal Lahir : " << mahasiswa[i].tanggal << endl;
            cout << "Bulan Lahir : " << mahasiswa[i].bulan << endl;
            cout << "Tahun Lahir : " << mahasiswa[i].tahun << endl;
            cout << "Usia : " << mahasiswa[i].usia << endl;
            cout << "Tahun Masuk : " << mahasiswa[i].tahunMasuk << endl;
        }
    }

    return 0;
}