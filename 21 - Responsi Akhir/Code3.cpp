#include <iostream>
#include <conio.h>
using namespace std; 

//STRUKTUR NODE
struct Node { 
	int data; 
	struct Node *left, *right; 
}; 


//FUNGSI MENAMBAH NODE BARU
Node *addNode(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

//FUNGSI INSERT DATA SECARA BST
Node *insertData(Node *anode, int data){
    if(anode == NULL){
        return addNode(data);
    }

    if(data < anode->data){
        anode->left = insertData(anode->left, data);
    }else if(data > anode->data){
        anode->right = insertData(anode->right, data);
    }

    return anode;
}

//FUNGSI MENCETAK DATA SECARA ASCENDING
//KARENA BST, SEHINGGA KETIKA DATA DICETAK SECARA INORDER, PASTI AKAN TERURUT ASCENDING
void printInorder(Node *anode){
    if(anode != NULL){
        printInorder(anode->left);
        cout << anode->data << " ";
        printInorder(anode->right);
    }
}

int main() {
	int arr[] = {25, 73, 41, 30, 58, 64, 98, 13, 87, 91, 17, 76, 28, 45, 56}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

    Node *tree = NULL;
    for(int i=0; i<n; i++){
        tree = insertData(tree, arr[i]);
    }
    printInorder(tree);

	getch(); 
} 
