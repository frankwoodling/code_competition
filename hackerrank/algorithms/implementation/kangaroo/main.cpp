// HackerRank Practice Problems
// Algorithms > Implementation > Kangaroo

#include <map>
#include <bitset>
#include <fstream>
#include <iostream>
#include <algorithm>


using namespace std;


int main(){
    int x1, v1, x2, v2;
    int max_iter = 10000;

    cin >> x1 >> v1 >> x2 >> v2;

    int kang_1 [max_iter];
    int kang_2 [max_iter];

    kang_1[0] = x1;
    kang_2[0] = x2;

    string output = "NO";

    for(int i = 1; i < max_iter; i++)
    {
        kang_1[i] = kang_1[i-1] + v1;
        kang_2[i] = kang_2[i-1] + v2;
    }

    for(int i = 0; i <5; i++)
    {
        if(kang_1[i] == kang_2[i])
        {
            output = "YES";
        }
    }

    cout << output;

    return 0;
}


// clever answer
// if (x1 - x2) % (v2 - v1) == 0 the kangaroos will meet