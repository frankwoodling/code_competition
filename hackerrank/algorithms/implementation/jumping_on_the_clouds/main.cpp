// HackerRank Practice Problems
// Algorithms > Implementation > Jumping on the Clouds

#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    int jumps = 0;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++)
    {
        cin >> c[c_i];
    }

    for(int i = 0; i < n - 1;)
    {
        if(c[i+2] == 0)
        {
            i += 2;
            jumps++;
        }
        else
        {
            i++;
            jumps++;
        }
    }
    cout << jumps;
    return 0;
}

