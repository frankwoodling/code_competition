// HackerRank Practice Problem
// AI > Statistics and Machine Learning > Laptop Battery Life

#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    double n;
    cin>>n;

    double bat_life = n * 2;
    if(bat_life >= 8){cout << 8.00;}
    else{cout << bat_life;}

    return 0;
}