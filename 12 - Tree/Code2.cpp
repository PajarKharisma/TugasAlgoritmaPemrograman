#include <iostream>
#include <conio.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node *addChild(int data){
	Node *newNode = new Node;
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

void print(Node *node){
	if(node != NULL){
		print(node->left);
		print(node->right);
		cout << node->data << " ";
	}
}

int height(Node *root){
	if(root == NULL){
		return 0;
	} else{
		int lHeight = height(root->left);
		int rHeight = height(root->right);

		if(lHeight > rHeight){
			return lHeight + 1;
		}else{
			return rHeight + 1;
		}
	}
}

void print(Node *node, int level){
	if(node != NULL){
		if(level == 1){
			cout << node->data << " ";
		}else if(level > 1){
			print(node->left, level-1);
			print(node->right, level-1);
		}
	}
}

void printBfs(Node *root){
	int n = height(root);

	for(int i=1; i<=n; i++){
		print(root, i);
	}
}

int main(){
	Node *root = addChild(1);
	root->left = addChild(2);
	root->left->left = addChild(4);
	root->left->right = addChild(5);
	root->right = addChild(3);
	//print(root, 2);

	printBfs(root);

	getch();
	return 0;
}