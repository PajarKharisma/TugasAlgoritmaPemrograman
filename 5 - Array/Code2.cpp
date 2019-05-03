#include <iostream>
using namespace std;

int main(){
    int arr[3][5];

    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            cout << "Input array[" << i <<"][" << j << "] : ";
            cin >> arr[j][i];
        }
        cout << "=============================" << endl;
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            cout << arr[j][i] << " |";
        }
        cout << endl;
    }
    return 0;
}