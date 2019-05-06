#include <iostream>
#include <conio.h>
#include <string>
#include <cstring>
using namespace std;

struct Hash {
    int getBigestPrime(int val){
        bool isPrime = false;
        int bigestPrime = -1;
        while(!isPrime && val >= 0){
            int cek = 0;
            for(int i=1; i<=val; i++){
                if(val % i == 0){
                    cek++;
                }
            }
            if(cek <= 2){
                isPrime = true;
                bigestPrime = val;
            }
            val--;
        }
        return bigestPrime;
    }

    int getStringValue(string s){
        char c[s.size()+1];
        strcpy(c, s.c_str());
        int sum = 0;
        for(int i=0; i<s.size(); i++){
            sum += (int)c[i];
        }
        return sum;
    }

    void hashing(string data, string kamus[]){
        int p = getBigestPrime(100);
        int val = getStringValue(data);
        int index = val % p;
        while(kamus[index] != ""){
            index++;
        }
        kamus[index] = data;
    }
};


int main(){
    Hash hash;
    string kamus[100];
    string data[] = {"hari", "senin", "belajar", "giat", "agar", "kelak", "baik", "hasil", "tidak", "ada", "sesal", "dan", "besok", "tetap", "semangat", "kerja", "juang", "demi", "masa", "depan", "lebih", "cerah"};
    int n = sizeof(data)/sizeof(data[0]);
    for(int i=0; i<n; i++){
        hash.hashing(data[i], kamus);
    }

    for(int i=0; i<100; i++){
        if(kamus[i] != "")
            cout << i << "-" << kamus[i] << endl;
    }
    getch();
}