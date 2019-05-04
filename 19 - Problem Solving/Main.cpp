#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

int main(){
    int idr[] = {14086, 14136, 14137, 14224, 14227, 14221, 14216, 14229, 14253};
    int size = sizeof(idr)/sizeof(idr[0]);
    vector<int> diffList;
    for(int i=size-1; i>0; i--){
        int diff = abs(idr[i] - idr[i-1]);
        diffList.push_back(diff);
    }
    
    int max = 0;
    for(auto i:diffList){
        if(i > max)
            max = i;
    }
    cout << "Selisih maximal adalah : " << max;
    getch();
}