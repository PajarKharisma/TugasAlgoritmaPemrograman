#include <iostream>
#include <curses.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int findMin(int data[], int first, int last){
    int index = first;
    int minData = data[index];

    for(int i=first; i<last; i++){
        if(data[i] < minData){
            index = i;
            minData = data[index];
        }
    }
    return index;
}

int findMax(int data[], int first, int last){
    int index = first;
    int maxData = data[index];

    for(int i=first; i<last; i++){
        if(data[i] > maxData){
            index = i;
            maxData = data[index];
        }
    }
    return index;
}

void selectionSort1(int data[], int n) { 
    for (int i=0; i<n; i++) {
        int index = findMax(data, i, n);
        swap(data[index], data[i]);
    } 
}

void selectionSort(int arr[], int n) { 
    int minIndex;
    int compareCounter = 0;
    int swapCounter = 0;

    for (int i=0; i<n-1; i++) {
        minIndex = i; 
        for (int j = i+1; j < n; j++){
            compareCounter++;
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        if(arr[minIndex] != arr[i]){
            swapCounter++;
            swap(arr[minIndex], arr[i]);
        }
    } 
    cout << "Compare Counter : " << compareCounter << endl;
    cout << "Swap Counter : " << swapCounter << endl;
}

int main(){
    int data[] = {3, 5, 7, 4, 9, 1, 8, 2, 6};
    int n = sizeof(data)/sizeof(data[0]);
    selectionSort1(data, n);

    for(int i=0; i<n; i++){
        cout << data[i] << " ";
    }
    return 0;
}