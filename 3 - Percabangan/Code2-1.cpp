#include <iostream>
using namespace std;

int main(){
    float ipk;
    cout << "Masukan IPK Mahasiswa (Skala 4) : ";
    cin >> ipk;
    if(ipk > 3.8){
        cout << "Predikat : summa cum laude" << endl;
    } else if(ipk > 3.6){
        cout << "Predikat : magna cum laude" << endl;
    } else if(ipk > 3.4){
        cout << "Predikat : magna cum laude" << endl;
    } else {
        cout << "Predikat : tanpa perdikat" << endl;
    }
    
    return 0;
}