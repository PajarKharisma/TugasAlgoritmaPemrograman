#include <iostream>
#define ABC 5

using namespace std;

int A,B;
char X,Y;

int main (){
    int a;   int b = 0;   char x;   char y = '\0';
    const int DEF = 123;
    
    cout << "TIPE DATA dan VARIABEL" << endl;
    // tampilkan A, B, a, b, X, Y, x, y
    // apakah A = a? B = b? X=x dan Y=y?

    cout << "A : " << A << endl;
    cout << "a : " << a << endl;
    cout << "B : " << B << endl;
    cout << "b : " << b << endl;
    cout << endl;
    cout << "X : " << X << endl;
    cout << "x : " << x << endl;
    cout << "Y : " << Y << endl;
    cout << "y : " << y << endl;

    
    a = 2 + b;   A = a - b;  B = DEF % ABC;
    
    int C = A >= B ? A:B;
    int D = (B + 5) << 2;
    
    // Berapakah nilai A, B, C, D?
    cout << endl;
    cout << "C : " << C << endl;
    cout << "D : " << D << endl;
        
    return 0;
}