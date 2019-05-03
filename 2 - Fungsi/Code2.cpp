#include <iostream>
using namespace std;

int max(int a, int b){
	if(a>b) {
		int temp;
		temp = a;
        a = b;
		b = temp;
		return temp;
    }
	else return b;
}

int main() {
	int A = 8; int B = 4;
	int C = max(A,B);
	cout << A << B << C << endl;
}