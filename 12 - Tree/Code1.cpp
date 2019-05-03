#include <iostream>
#include <conio.h>
using namespace std;

struct Node{
    int data;
    Node *anak_kanan;
    Node *anak_tengah;
    Node *anak_kiri;
} *tree;

Node *addNode(int data){
    Node *newNode = new Node;
    newNode->anak_kiri = newNode->anak_tengah = newNode->anak_kanan = NULL;
    newNode->data = data;

    return newNode;
}

void cetakTree01(Node *anode){
    if(anode != NULL){
        cetakTree01(anode->anak_kiri);
        cetakTree01(anode->anak_kanan);
        cout << anode->data << " ";
    }
}

void print(Node *anode){
    cout << anode->anak_tengah->data << " ";
    cout << anode->anak_kiri->data << " ";
    cout << anode->anak_kanan->data << " ";
}

int main(){
    tree = addNode(4);
    //tree->anak_kiri = addNode(2);
    tree->anak_kiri = addNode(5);
    tree->anak_kanan = addNode(7);

    tree->anak_kiri->anak_kanan = addNode(3);

    tree->anak_kanan->anak_kiri = addNode(9);
    tree->anak_kanan->anak_kanan = addNode(1);

    //print(tree->anak_kiri
    cetakTree01(tree);
    getch();
    return 0;
}