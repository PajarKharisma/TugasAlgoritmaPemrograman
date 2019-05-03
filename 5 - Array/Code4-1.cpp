#include <iostream>
using namespace std;

void print(int arr[][5], int rows, int cols){

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << " | " << arr[i][j] <<" | ";
        }
        cout << endl;
    }
}

int main(){
    int arr[][5] = {
        {23,8,41,6,18},
        {49,35,16,36,10},
        {17,37,21,29,45}
    };
    int rows =  sizeof arr / sizeof arr[0]; 
    int cols = sizeof arr[0] / sizeof(int);

    print(arr, rows, cols);
    return 0;
}