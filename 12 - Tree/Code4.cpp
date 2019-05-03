#include <iostream>
#include <conio.h>
#include <queue>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

struct Tree{
    private:
        queue<Node*> q;

    public:
        Node *addChild(int data){
            Node *newNode = new Node;
            newNode->data = data;
            newNode->left = newNode->right = NULL;
            return newNode;
        }

        void print(Node *root) { 
            if (root == NULL) return;
            Node *curr; 

            q.push(root); 
            q.push(NULL); 
  
            while (q.size() > 1) { 
                curr = q.front(); 
                q.pop(); 

                if (curr == NULL) { 
                    q.push(NULL); 
                    cout << "\n"; 
                } else { 
                    if(curr->left) 
                        q.push(curr->left);
                    if(curr->right) 
                        q.push(curr->right); 
                    cout << curr->data << " "; 
                } 
            } 
        }
};


int main(){
    Node *root;
    Tree tree;

    root = tree.addChild(1);
    root->left = tree.addChild(2);
    root->left->left = tree.addChild(4);
    root->left->right = tree.addChild(5);
    root->right = tree.addChild(3);

    tree.print(root);
    
    getch();
    return 0;
}