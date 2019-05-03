#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void sorting(int data[], int n){
    for(int i=0; i<n; i++){
        int index = i;
        for(int j=i+1; j<n; j++){
            if(data[j] < data[index]){
                index = j;
            }
        }
        swap(data[index], data[i]);
    }
}

void merge(int arr[], int l, int m, int r) { 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 

    i = 0;
    j = 0; 
    k = l;
    while (i < n1 && j < n2) { 
        if(L[i] <= R[j]){ 
            arr[k] = L[i]; 
            i++; 
        } 
        else{ 
            arr[k] = R[j]; 
            j++; 
        } 
        k++;
    } 

    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 

    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 

void split(int data[], int l, int r, int size){
    if(size > 3){
        int m = l+(r-l)/2;
        split(data, l, m, (m-l));
        split(data, m+1, r, (r-m));
        sorting(data, size);
        merge(data, l, m, r);
    }
}

int *merge(int a[], int b[], int sizeA, int sizeB){
    int *c = new int[sizeA + sizeB];
    int i = 0;
    int j = 0;
    int k = 0;

    while((i<sizeA) && (j<sizeB)){
        if(a[i] < b[j]){
            c[k] = a[i];
            i++;
        }else{
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < sizeA) { 
        c[k] = a[i]; 
        i++; 
        k++; 
    } 
  
    while (j < sizeB) { 
        c[k] = b[j]; 
        j++; 
        k++; 
    } 

    return c;
}

int main(){
/*     int a[] = {2, 7, 8};
    int sizeA = sizeof(a)/sizeof(a[0]);

    int b[] = {5, 6, 9, 10};
    int sizeB = sizeof(b)/sizeof(b[0]);
    
    int *c = merge(a, b, sizeA, sizeB);
    for(int i=0; i<7; i++){
        cout << c[i] << " ";
    } */
    int arr[] = {12, 11, 13, 5, 6, 7, 15, 75, 3, 43, 50, 73, 21, 89}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    cout << "Unsorted Array : ";
    for(int i=0; i<arr_size; i++){
        cout << arr[i] << " ";
    }
  
    split(arr, 0, arr_size - 1, arr_size); 
    
    cout << endl << "Sorted Array : ";
    for(int i=0; i<arr_size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0; 
}