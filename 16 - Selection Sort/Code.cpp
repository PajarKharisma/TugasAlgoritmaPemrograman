#include <iostream>
#include <conio.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int data[] = {1, 11, 12, 2, 13, 23, 31, 62, 71, 81};
    int n = sizeof(data)/sizeof(data[0]);
    //output : 1, 11, 31, 71, 81, 2, 12, 62, 13, 23

    for(int i=0; i<n; i++){
        int index = i;
        for(int j=i+1; j<n; j++){
            if(data[j] < data[index]){
                index = j;
            }
        }
        swap(data[index], data[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(data[j]%10 > data[j+1]%10){
                swap(data[j], data[j+1]);
            }
        }
    }

    cout << "DATA : ";
    for(int i=0; i<n; i++){
        cout << data[i] << " ";
    }
    getch();
}