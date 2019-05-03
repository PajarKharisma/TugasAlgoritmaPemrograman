#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

//Fungsi cetak Linkedlist
void cetak(node *l){
    while(l != NULL){
        cout << "|" << l->data << "|next|-->";
        l = l->next;
    }
    cout << "NULL" << endl;
}

//Fungsi insert node di depan atau di belakang
node *insertList(node *l, node *insertNode){
    node *result;
    if (insertNode->data >= l->data){
        node *t = l;
        while(t->next != NULL){
            t = t->next;
        }
        t->next = insertNode;
        insertNode->next = NULL;
        result = l;
    }else{
        insertNode->next = l;
        result = insertNode;
    }
    return result;
}

//fungsi menghapus linkedList berdasarkan nilainya
node *deleteList(node *l, int value){
    node *p = l;
    node *deleteNode, *targetNode;
    while(p->data != value){
        targetNode = p;
        p = p->next;
    }
    deleteNode = targetNode->next;
    targetNode->next = deleteNode->next;
    delete deleteNode;
    return l;
}

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
    cout << "LINKED LIST : ";
    cetak(contoh);

    node *a = new node;
    a->data = 5;
    contoh = insertList(contoh,a);
    
    node *b = new node;
    b->data = 45;
    contoh = insertList(contoh,b);

    node *c = new node;
    c->data = 50;
    contoh = insertList(contoh, c);

    node *d = new node;
    d->data = 55;
    contoh = insertList(contoh, d);
    cout << "LINKED LIST HASIL PENAMBAHAN : ";
    cetak(contoh);

    contoh = deleteList(contoh, 20);
    cout << "LINKED LIST HASIL PENGURANGAN : ";
    cetak(contoh);

    return 0;
}