#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

int main(){
    node *contoh;
    node *contoh2 = new node;
    contoh = new node;
    contoh->data = 10;
    contoh->next = new node;
    contoh->next->next = contoh2;
    contoh->next->data = 20;
    contoh->next->next->data = 30;
    contoh2->next = NULL;

    node *l = contoh;
    while(l != NULL){
        cout << l->data << " ";
        l = l->next;
    }
    
    return 0;
}