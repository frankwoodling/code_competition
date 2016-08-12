// HackerRank Practice Problem
// Algorithms > Implementation > Save the Prisoner!

#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;


// fails test case 0
int main(){
    long long int n, prisoners, sweets, id;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> prisoners >> sweets >> id;
        id = (id+sweets-1)%prisoners;

        if(id == prisoners){cout << prisoners << endl;}
        else{cout << id << endl;}
    }
}


// working code
/*int main(){
    int t,n,m,s,z,d;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d %d %d", &n, &m, &s);
        d=s+m-1;

        while(d>n)
        {
            d=d-n;
        }
        cout<<d<<'\n';
    }
    return 0;
}*/
