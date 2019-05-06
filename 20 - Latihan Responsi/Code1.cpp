#include <iostream>
#include <conio.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

struct Stack{
    Node *list;
    
    void init(){
        list = NULL;
    }

    Node *getList(){
        return this->list;
    }

    void push(int data){
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = this->list;
        this->list = newNode;
    }

    int pop(){
        Node *p = this->list;
        int data = p->data;
        this->list = p->next;
        delete p;

        return data;
    }

    bool isEmpty(){
        if (this->list == NULL)
            return true;
        else
            return false;
    }

    int getNumList(){
        int count = 0;
        Node *p = list;
        while(p != NULL){
            count++;
            p = p->next;
        }
        return count;
    }

    void printStack(){
        Node *p = list;
        while(p != NULL){
            cout << p->data << " ";
            p = p->next;
        }
    }
};

int main(){
    Stack stack1, stack2;
    int finalis = 5;
    stack1.init();
    stack2.init();
    int peserta[] = {367, 475, 389, 274, 485, 492, 263, 394, 476, 358, 482, 249, 377, 472, 453, 282, 375, 494, 286, 468};
    int n = sizeof(peserta)/sizeof(peserta[0]);
    for(int i=0; i<n; i++){
        stack1.push(peserta[i]);
    }

    int turn = 1;
    while ((stack1.getNumList() > 5) || (stack2.getNumList() > 5)){
        switch (turn){
        case 1:
            while(!stack1.isEmpty()) {
                int peserta1 = stack1.pop();
                int peserta2 = stack1.pop();
                stack2.push(max(peserta1, peserta2));
            }
            turn = 2;
        break;
        case 2:
            while(!stack2.isEmpty()) {
                int peserta1 = stack2.pop();
                int peserta2 = stack2.pop();
                stack1.push(max(peserta1, peserta2));
            }
            turn = 1;
        break;
        }
    }
    getch();
}
