#include <iostream>
using namespace std;

void cetakIndexPertama(int arg[]){
    cout << arg[0] << endl;
}

void cetakIndexPertama(char arg[]){
    cout << arg[0] << endl;
}

int main() {
    int ar[] = {5,6,7,8,9};
    char kata[] = "Merdeka";
    //kata = "merdeka";
    kata[0] = 'm';
    std::cout<<kata<<std::endl;
    cetakIndexPertama(ar);
    cetakIndexPertama(kata);
    return 0;
}