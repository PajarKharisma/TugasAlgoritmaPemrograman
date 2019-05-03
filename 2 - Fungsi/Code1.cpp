#include <iostream>
using namespace std;

int X;
int maximal(int a, int b);

int main (){
    int A = 6;
    int B = 4;
    X = maximal(A,B);

    cout << X << endl;
}

int maximal(int a, int b){
    int res;
    if (a > b) 
        res = a;
    else
        res = b;
    return res;
}