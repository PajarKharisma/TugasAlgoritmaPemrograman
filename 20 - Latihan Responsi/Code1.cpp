#include <iostream>
#include <conio.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

//struktur queue
struct Queue{
    private:
        Node *list;
        Node *tail;

    public:
        //method init seperti constructor pada java. Harus dipanggil setelah queue dideklarasi
        void init(){
            this->list = NULL;
        }

        //method untuk medapatkan isi queue
        Node *getList(){
            return this->list;
        }

        //method insert data ke dalam queue
        void enQueue(int data){
            Node *newNode = new Node;
            newNode->data = data;
            newNode->next = NULL;
            if(this->list == NULL){
                this->list = newNode;
                this->tail = newNode;
            }else{
                this->tail->next = newNode;
                this->tail = this->tail->next;
            }
        }

        //method mengeluarkan data dari queue
        int deQueue(){
            int data = this->list->data;
            Node *delNode = this->list;
            this->list = this->list->next;
            delete delNode;
            return data;
        }

        //method untuk mencetak isi queue
        void printQueue(string title){
            cout << endl << title;
            Node *l = this->list;
            while(l != NULL){
                cout << l->data << " ";
                l = l->next;
            }
        }

        //method untuk memeriksa apakah queue kosong atau tidak
        bool isEmpty(){
            if(getList() == NULL)
                return true;
            else
                return false;
        }

        //method untuk mengetahui jumlah isi queue
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
    //deklarasi queue
    Queue qPeserta1, qPeserta2, qFinalis;
    int finalis = 5;

    //initialize queue agar nilai diset NULL
    qPeserta1.init();
    qPeserta2.init();
    qFinalis.init();

    //data nilai peserta
    int peserta[] = {367, 475, 389, 274, 485, 492, 263, 394, 476, 358, 482, 249, 377, 472, 453, 282, 375, 494, 286, 468};
    int n = sizeof(peserta)/sizeof(peserta[0]);
    //memasukan data nilai peserta dalam qPeserta1
    for(int i=0; i<n; i++){
        qPeserta1.enQueue(peserta[i]);
    }

    qPeserta1.printQueue("Peserta awal : ");

    //mendapatkan 4 finalis pertama dengan cara mencari nilai tertinggi antara 2 peserta secara berurutan
    //dan memasukannya dalam qFinalis
    while(qFinalis.getNumList() < finalis-1){
        int peserta1 = qPeserta1.deQueue();
        int peserta2 = qPeserta1.deQueue();
        qFinalis.enQueue(max(peserta1, peserta2));
    }

    qFinalis.printQueue("4 Finalis awal : ");

    //Mencari 1 finalis tersisa dengan cara mencari nilai tertinggi 2 peserta sisanya secara berurutan.
    //Kemudian pemenangnya akan diadu lagi hingga didapatkan nilai tertinggi
    //Proses ini menggunakan 2 queue. Semua pemenang dari qPeserta1 akan dimasukan dalam qPeserta2.
    //Setelah itu, semua pemenang dari qPeserta2 akan dimasukan dalam qPeserta1 hingga akhirnya didapatkan 1 pemenang.
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

    //proses memasukan finalis terakhir dalam qFinalis
    if(!qPeserta1.isEmpty()){
        qFinalis.enQueue(qPeserta1.deQueue());
    }else{
        qFinalis.enQueue(qPeserta2.deQueue());
    }

    //cetak daftar finalis
    qFinalis.printQueue("5 Finalis akhir: ");
    getch();
}
