#include <iostream>
#include <conio.h>
#include <queue>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *mid;
        Node *right;
};

class Tree{
    private:
        queue<Node*> q;

    public:
        Node *addChild(int data){
            Node *newNode = new Node;
            newNode->data = data;
            newNode->left = newNode->mid = newNode->right = NULL;
            return newNode;
        }

        void traceBfs(Node *node){
            if(node != NULL){
                cout << node->data << " ";
                if(node->left != NULL)
                    q.push(node->left);
                if(node->mid != NULL)
                    q.push(node->mid);
                if(node->right != NULL)
                    q.push(node->right);
                
                Node *tmp = q.front();
                q.pop();
                traceBfs(tmp);
            }
        }
};

int main(){
    Tree tree;
    Node *root = tree.addChild(4);

    root->left = tree.addChild(2);
    root->mid = tree.addChild(5);
    root->right = tree.addChild(7);

    root->mid->mid = tree.addChild(3);

    root->right->mid = tree.addChild(9);
    root->right->right = tree.addChild(1);

    tree.traceBfs(root);

    getch();
    return 0;
}