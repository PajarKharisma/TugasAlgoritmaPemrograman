#include <iostream>
using namespace std;

int main(){
    //Array 1 dimensi baru untuk menyimpan array 2 dimensi.
    int arr[3*5];

    //Array 2 dimensi dari soal 2
    int arrB[3][5] = {
        {23,8,41,6,18},
        {49,35,16,36,10},
        {17,37,21,29,45}
    };

    //Proses menyimpan nilai array 2 dimensi ke dalam array 1 dimensi
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            arr[(i*5)+j] = arrB[i][j];
        }
    }

    int k = 0;
    for(int i=0; i<15; i++){
        cout << " | " << arr[i] <<" | ";
        k++;
        if(k>=5){
            cout << endl;
            k = 0;
        }
    }
    return 0;
}