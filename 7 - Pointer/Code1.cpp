#include <iostream>
using namespace std;

int main() {
    int a,b;
    int *c;
    a = 5;
    b = a;
    c = &a;
    //1. Berapa nilai a, b, dan c?

    b = b + *c;
    *c = 15;
    //2. Berapa nilai a, b, dan c sekarang?
    //3. Variabel a tidak mengalami operasi apapun, apakah nilai a tetap atau berubah? jelaskan penyebabnya.
    //4. Jelaskan operasi yang terjadi pada variabel b

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << *c << endl;
    return 0;
}