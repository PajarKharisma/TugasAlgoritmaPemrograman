#include <iostream>
using namespace std;

int main() {
    int a,b,c = 0;
    int * pointer;
    
    pointer = &a;
    *pointer = 200;
    pointer = &b;
    *pointer = 400;
    pointer = &c;
    *pointer = *(&a);

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
    return 0;
}