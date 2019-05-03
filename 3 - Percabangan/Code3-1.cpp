#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "masukan nilai N : ";
    cin >> n;

    int x = 0;
    for(int i=0; i<=n; i++){
        x+=i;
    }

    cout << "Jumlahan deret bilangan bulat positif " << n << " adalah " << x << endl;

    return 0;
}