#include <iostream>
using namespace std;

struct tipeA{
    int varA, varB;
    int varC; 
} varA, varB;

int main(){
   tipeA varX;
   varA.varA = 100;
   varB.varA = 200;
   varX.varA = 300;
   // coba cetak isi varA masing-masing
   cout << "varA.varA : " << varA.varA << endl;
   cout << "varB.varA : " << varB.varA << endl;
   cout << "varX.varA : " << varX.varA << endl;

   return 0;
}