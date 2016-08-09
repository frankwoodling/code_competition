// HackerRank Practice Problems
// Algorithms > Sorting > Intro to Tutorial Challenges

#include <iostream>
using namespace std;

int main()
{
    int v, n;
    cin >> v >> n;
    int ar [n];

    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if(v == ar[i])
        {
            cout << i;
            break;
        }
    }
    return 0;
}

// could remove cin >> ar[i] and check each as the loop goes through