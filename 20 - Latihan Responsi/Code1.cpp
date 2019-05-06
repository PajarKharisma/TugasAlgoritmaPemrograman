#include <iostream>
#include <conio.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

struct Queue{
    private:
        Node *list;

    public:
        void init(){
            this->list = NULL;
        }

        Node *getList(){
            return this->list;
        }

        void enQueue(int data){
            Node *newNode = new Node;
            newNode->data = data;
            newNode->next = NULL;
            if(this->list == NULL){
                this->list = newNode;
            }else{
                Node *t = this->list;
                while (t->next != NULL){
                    t = t->next;
                }
                t->next = newNode;
            }
        }

        int deQueue(){
            int data = this->list->data;
            Node *delNode = this->list;
            this->list = this->list->next;
            delete delNode;
            return data;
        }

        void printQueue(string title){
            cout << endl << title;
            Node *l = this->list;
            while(l != NULL){
                cout << l->data << " ";
                l = l->next;
            }
        }

        bool isEmpty(){
            if(getList() == NULL)
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
};

int main(){
    Queue qPeserta1, qPeserta2, qFinalis;
    int finalis = 5;

    qPeserta1.init();
    qPeserta2.init();
    qFinalis.init();

    int peserta[] = {367, 475, 389, 274, 485, 492, 263, 394, 476, 358, 482, 249, 377, 472, 453, 282, 375, 494, 286, 468};
    int n = sizeof(peserta)/sizeof(peserta[0]);
    for(int i=0; i<n; i++){
        qPeserta1.enQueue(peserta[i]);
    }

    qPeserta1.printQueue("Peserta awal : ");

    while(qFinalis.getNumList() < finalis-1){
        int peserta1 = qPeserta1.deQueue();
        int peserta2 = qPeserta1.deQueue();
        qFinalis.enQueue(max(peserta1, peserta2));
    }

    qFinalis.printQueue("4 Finalis awal : ");

    int turn = 1;
    while (qPeserta1.getNumList() > 1 || qPeserta2.getNumList() > 1){
        switch (turn){
        case 1:
            while(!qPeserta1.isEmpty()){
                int peserta1 = (!qPeserta1.isEmpty()) ? qPeserta1.deQueue() : 0;
                int peserta2 = (!qPeserta1.isEmpty()) ? qPeserta1.deQueue() : 0;
                qPeserta2.enQueue(max(peserta1, peserta2));
            }
            turn = 2;
        break;
        
        case 2:
            while(!qPeserta2.isEmpty()){
                int peserta1 = (!qPeserta2.isEmpty()) ? qPeserta2.deQueue() : 0;
                int peserta2 = (!qPeserta2.isEmpty()) ? qPeserta2.deQueue() : 0;
                qPeserta1.enQueue(max(peserta1, peserta2));
            }
            turn = 1;
        break;
        }
    }
    if(!qPeserta1.isEmpty()){
        qFinalis.enQueue(qPeserta1.deQueue());
    }else{
        qFinalis.enQueue(qPeserta2.deQueue());
    }
    qFinalis.printQueue("5 Finalis akhir: ");
    getch();
}
