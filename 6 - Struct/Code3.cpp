#include <iostream>
using namespace std;

struct {
    int varA, varB;
    int varC; 
} varX, varY;

int main(){
    auto varZ = varX; //Deklarasi varZ mengikuti varX
    varX.varA = 100;
    varY.varA = 200;

    cout << "varX.varA : " << varX.varA << endl;
    cout << "varY.varA : " << varY.varA << endl;

    varZ = varX; //varZ diisi dengan nilai yang sama dengan varX
    cout << "varZ.varA : " << varZ.varA << endl;

    return 0;
}