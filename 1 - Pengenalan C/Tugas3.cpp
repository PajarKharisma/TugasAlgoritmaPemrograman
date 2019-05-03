#include <iostream>
using namespace std;

int main(){
    int pA, lA, LA;

    cout << "=========== BANGUNAN A =============" << endl;
    cout << "Masukan panjang bangunan A : ";
    cin >> pA;
    cout << "Masukan lebar bangunan A : ";
    cin >> lA;
    LA = pA * lA; //Proses mencari Luas bangunan A

    cout << endl;

    int pB, lB, LB;

    cout << "============= BANGUNAN B =============" << endl;
    cout << "Masukan panjang bangunan B : ";
    cin >> pB;
    cout << "Masukan lebar bangunan B : ";
    cin >> lB;
    LB = pB * lB; //Proses mencari Luas bangunan B

    cout << endl;

    int pC, lC, LC;

    cout << "============= BANGUNAN C =============" << endl;
    cout << "Masukan panjang bangunan C : ";
    cin >> pC;
    cout << "Masukan lebar bangunan C : ";
    cin >> lC;
    LC = pC * lC; //Proses mencari Luas bangunan C

    cout << endl;

    int sisaTanah = LB - (LA + LC); //Proses mencari sisa tanah yang tidak tertutup
    cout << "Luas sisa tanah adalah " << sisaTanah << " Meter" << endl;

    return 0;
}