#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int *arr;

int hashCode(int key, int size){
    return key % size;
}

void getIndex(int key){
    int index = hashCode(key, 15);
    if(arr[index] == -1){
        cout << key << " => " << index << endl;
        arr[index] = key;
    }else{
        int i=1;
        int newPos = index;
        while(arr[newPos] != -1){
            newPos = index;
            int quadratic = pow(i, 2);
            newPos = (index + quadratic) % 15;
            i++;
        }
        cout << key << " => " << newPos << endl;
        arr[newPos] = key;
    }
}

int hashProbing(int key){
    return 13 - (key % 13);
}

void doubleProbing(int key){
    int index = hashCode(key, 15);
    if(arr[index] == -1){
        cout << key << " => " << index << endl;
        arr[index] = key;
    } else{
        int newPos = index;
        while(arr[newPos] != -1)
            newPos = (newPos + hashProbing(key)) % 15;
            
        cout << key << " => " << newPos << endl;
        arr[newPos] = key;
    }
}

int main(){
    int data[] = {8, 20, 4, 2, 37, 10, 59, 174, 65, 3};
    int n = 15;
    arr = new int[n];

    for(int i=0; i<n; i++)
        arr[i] = -1;

    for(int i=0; i<10; i++)
        doubleProbing(data[i]);
    
    getch();
}