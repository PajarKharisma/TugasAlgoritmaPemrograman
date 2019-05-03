#include <iostream>
using namespace std;

int hitung(int a, int b);
int hitung(float a, int b);
int hitung(int a, int b, int c);

int main(){
    int x = 3; float y = 2;
	int A = hitung(2,x);
    int B = hitung(y,5);
	int C = hitung(2,5,4);

    cout << "A : " << A << endl;
    cout << "B : " << B << endl;
    cout << "C : " << C << endl;
}

int hitung(int a, int b){
	return (a+b); 
}
int hitung(float a, int b){
	return ((a+b) * 2); 
}
int hitung(int a, int b, int c){
	return (a+b-c); 
}