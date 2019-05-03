#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

//Fungsi cetak Linkedlist
void cetak(node *l){
    while (l != NULL){
        cout << "|" << l->data << "|next|-->";
        l = l->next;
    }
    cout << "NULL" << endl;
}

int main(){
    //Proses pembuatan node1 dan pemerian nilai
    node *node1 = new node;
    node1->data = 10;

    //Proses pembuatan node2 dan pemerian nilai
    node *node2 = new node;
    node2->data = 20;
    node1->next = node2;

    //Proses pembuatan node3 dan pemerian nilai
    node *node3 = new node;
    node3->data = 40;
    node2->next = node3;
    node3->next = NULL;

    //Proses cetak node awal
    cetak(node1);

    //Proses pembuatan node yang akan diinsertkan di tengan dan pemerian nilai
    node *nodeTengah = new node;
    nodeTengah->data = 15;

    //Proses insert node diantara node1 dan node2
    nodeTengah->next = node2;
    node1->next = nodeTengah;

    //Proses pembuatan node yang akan diinsert di depan dan pemerian nilai
    node *nodeDepan = new node;
    nodeDepan->data = 5;

    //Proses insert node di depan (paling awal)
    nodeDepan->next = node1;

    node *l = nodeDepan;

    //Proses cetak node untuk membuktikan
    cetak(l);

    return 0;
}