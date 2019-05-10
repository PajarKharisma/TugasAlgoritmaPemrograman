#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;

//STRUKTUR LINKEDLIST UNTUK STACK
struct Node{
    char data;
    Node *next;
};

//STRUKTUR STACK
struct Stack{
    private:
        Node *list;

    public:
        //FUNGSI INITIALIZE SEPERTI CONSTRUCTOR
        void init(){
            list = NULL;
        }

        //GETER UNTUK MENDAPATKAN LIST KARENA OBJECT LIST DISET PRIVATE
        Node *getList(){
            return this->list;
        }

        //FUNGSI PUSH
        void push(char data){
            Node *newNode = new Node;
            newNode->data = data;
            newNode->next = this->list;
            this->list = newNode;
        }

        //FUNGSI POP
        char pop(){
            Node *p = this->list;
            char data = p->data;
            this->list = p->next;
            delete p;

            return data;
        }

        //FUNGSI MENGECEK STACK KOSONG ATAU TIDAK
        bool isEmpty(){
            if(this->list == NULL)
                return true;
            else
                return false;
        }
};

//FUNGSI MEMBALIK KALIMAT
string reverseWord(string word){
    //INSTANSIASI STACK
    Stack stack;
    stack.init();

    string result;
    int n = word.length();

    char alphabet[n + 1];
    //INSTRUKSI MEMISAHKAN KALIMAT PERHURUF DAN MEMASUKANNYA KE DALAM ARRAY
    strcpy(alphabet, word.c_str());

    //INSTRUKSI PUSH SETIAP CHARACTER KE DALAM STACK
    for (int i = 0; i < n; i++){
        stack.push(alphabet[i]);
    }

    //INSTRUKSI POP DATA DALAM STACK KEMUDIAN MENYUSUNNYA DALAM VARIABLE RESULT
    while(stack.getList() != NULL){
        result += stack.pop();
    }
    return result;
}

//FUNGSI CEK KALIMAT
bool checkPolindrom(string word){
    if(word == reverseWord(word))
        return true;
    else
        return false;
}

int main(){
    string word;
    cout << "Masukan kalimat : ";
    getline(cin, word);
    
    if(checkPolindrom(word))
        cout << "TRUE";
    else
        cout << "FALSE";
    
    getch();
}