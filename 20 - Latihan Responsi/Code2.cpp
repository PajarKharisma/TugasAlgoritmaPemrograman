#include <iostream>
#include <conio.h>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string a = "senin";
    char nama[a.size()+1];
    strcpy(nama, a.c_str());
    int sum = 0;
    for(int i=0; i<a.size(); i++){
        sum += (int)nama[i];
    }
    cout << sum << endl;
    getch();
}