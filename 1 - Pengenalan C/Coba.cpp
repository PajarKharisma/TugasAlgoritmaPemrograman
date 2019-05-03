#include <iostream>
using namespace std;

struct Segitiga{
    private:
        int alas;
        int tinggi;

    public:
        void setSegitiga(int alas, int tinggi){
            this->alas = alas;
            this->tinggi = tinggi;
        }

        int getSegitiga(){
            return (this->alas * this->tinggi)/2;
        }
};


int main(){
    Segitiga segitiga;
    int alas, tinggi;
    cout << "Masukan alas : ";
    cin >> alas;
    cout << "Masukan tinggi : ";
    cin >> tinggi;

    segitiga.setSegitiga(alas, tinggi);
    cout << "Luas segitiga adalah : " << segitiga.getSegitiga() << endl;

    return 0;
}