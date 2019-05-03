#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int data[], int n){
    int compareCounter = 0;
    int swapCounter = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(data[j] > data[j+1]){
                swap(data[j], data[j+1]);
            }
        }
    }
    
    for(int i=0; i<n; i++){
        cout << data[i] << " ";
    }
}

void bubbleSort1(int data[], int n){
int compareCounter = 0;
    int swapCounter = 0;
    bool tukar;

    do{
        tukar = false;
        int j = 0;
        while(j<n-1){
            compareCounter++;
            if(data[j] > data[j+1]){
                swapCounter++;
                tukar = true;
                swap(data[j], data[j+1]);
            }
            j++;
        }
    }while(tukar);

    cout << "Jumlah Perbandingan : " << compareCounter << endl;
    cout << "Jumlah Pertukaran : " << swapCounter << endl;
    for(int i=0; i<n; i++){
        cout << data[i] << " ";
    }
}

void bubbleSort2(int data[], int n){
    int compareCounter = 0;
    int swapCounter = 0;
    bool tukar;
    int ndata = n;

    do{
        tukar = false;
        int j = 0;
        while(j<n-1){
            compareCounter++;
            if(data[j] > data[j+1]){
                swapCounter++;
                tukar = true;
                swap(data[j], data[j+1]);
            }
            j++;
        }
        n--;
    }while(tukar);

    cout << "Jumlah Perbandingan : " << compareCounter << endl;
    cout << "Jumlah Pertukaran : " << swapCounter << endl;
    for(int i=0; i<ndata; i++){
        cout << data[i] << " ";
    }
}

int main(){
    int data[] = {9, 1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(data)/sizeof(data[0]);
    bubbleSort2(data, n);
}