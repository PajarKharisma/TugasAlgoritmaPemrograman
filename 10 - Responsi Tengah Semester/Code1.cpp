#include <iostream>
#include <conio.h>
using namespace std;

struct Tim{
    string namaTim;
    char objek;
    int anggota;
    int in;
    int out;
    Tim *next;
};

struct Object{
    char object;
    int count;
};

Tim *registrasi(Tim *tim){
    string namaTim;
    int anggotaTim;
    cout << "Masukan identitas tim : ";
    cin >> namaTim;
    cout << "Masukan jumlah anggota tim : ";
    cin >> anggotaTim;

    tim->namaTim = namaTim;
    tim->anggota = anggotaTim;

    return tim;
}

Tim *dataLomba(Tim *tim){
    Tim *newNode = new Tim;
    newNode->anggota = tim->anggota;
    string namaTim;
    char objek;
    int in;
    int out;
    cout << "Masukan Identitas Tim : ";
    cin >> namaTim;
    cout << "Masukan Identitas Objek : ";
    cin >> objek;
    cout << "Masukan menit kedatangan : ";
    cin >> in;
    cout << "Masukan menit keberangkatan : ";
    cin >> out;

    newNode->namaTim = namaTim;
    newNode->objek = objek;
    newNode->in = in;
    newNode->out = out;

    Tim *t = tim;
    while (t->next != NULL) {
        t = t->next;
    }
    t->next = newNode;
    newNode->next = NULL;
    return tim;
}

void rekapitulasi(Tim *tim){
    Tim *p = tim;
    int jumlahObjek = 0;
    int menitPerjalanan = 0;
    float rataDiam = 0;
    while(p != NULL){
        menitPerjalanan += (p->next->in) - (p->out);
        rataDiam += (p->out) - (p->in);
        p=p->next;
        jumlahObjek++;
    }
    rataDiam = rataDiam/jumlahObjek;
    cout << "Nama Tim : " << tim->namaTim << endl;
    cout << "Jumlah anggota : " << tim->anggota << endl;
    cout << "Jumlah objek yang dikunjungin adalah : " << jumlahObjek << endl;
    cout << "Lama menit perjalanan : " << menitPerjalanan << endl;
    cout << "Rata - rata diam di sebuah objek : " << rataDiam << endl;
}

int pemenang(Tim *tim){
    Tim *p = new Tim;
    int nilaiObjek = 0;
    int nilaiPerjalanan = 0;
    int nilaiStay = 0;
    while (p != NULL){
        nilaiPerjalanan += ((p->next->in) - (p->out))*(-1);
        nilaiObjek += 50;
        nilaiStay = ((p->out) - (p->in))*1;
        p = p->next;
    }

    int totalNilai = nilaiObjek + nilaiPerjalanan + nilaiStay;
    return totalNilai;
}

char modus(int n){
    char object[] {'A','B','C','D','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char mostObject;
    Object objectPariwisata[26];
    for(int i=0; i<n; i++){
        
    }

    return mostObject;
}

int main(){
    int n = 5;
    Tim *tim[n];

    for (int i=0; i<n; i++){
        tim[i] = new Tim;
        tim[i] = dataLomba(tim[i]);
        tim[i]->next = NULL;
    }

    for(int i=0; i<n; i++){
        cout << "Nama tim : " << tim[i]->namaTim << endl;
        cout << "Objek : " << tim[i]->objek << endl;
        cout << "Waktu kedatangan : " << tim[i]->in << endl;
        cout << "Waktu keberangkatan : " << tim[i]->out << endl;
    }

    int nilaiTertinggi = 0;
    int timIdentity = 0;
    for(int i=0; i<n; i++){
        int nilai = pemenang(tim[i]);
        if(nilai > nilaiTertinggi){
            nilaiTertinggi = nilai;
            timIdentity = (i+1);
        }
    }
    cout << "Pemenangnya adalah Tim-" << (timIdentity) << " dengan nilai " << nilaiTertinggi;

    getch();
    return 0;
}