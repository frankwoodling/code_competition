// HackerRank Practice Problem
// Algorithms > Implementation > Find Digits


#include <iostream>
using namespace std;

int main(){
    int n = 1025;
    int d = 0;
    //int n = 0;

    while(n > 0){
        d = n%10;
        n = n/10;
        cout << d << " ";
    }

    return 0;
}