// HackerRank Practice Problem
// Algorithms > Implementation > Strange Counter

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k, luck = 0;
    cin >> n >> k;
    int arr [n][2];
    vector<int> c_imp, c_unimp;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];

        if(arr[i][1]==1)
        {
            c_imp.push_back(arr[i][0]);
        }
        else
        {
            c_unimp.push_back(arr[i][0]);
        }
    }

    sort (c_imp.begin(), c_imp.end());

    for(int i = 0; i < c_imp.size(); i++)
    {
        int ind = c_imp.size()-k;
        if(i < ind)
        {
            luck -= c_imp[i];
        }
        else
        {
            luck += c_imp[i];
        }
    }

    for(int i = 0; i < c_unimp.size(); i++)
    {
        luck += c_unimp[i];
    }

    cout << luck;

    return 0;
}

// used int ind = c_imp.size()-k; that i found in discussion
// this passed tests 8 and 9 while the below code did not:

// Passed
/*
for(int i = 0; i < c_imp.size(); i++)
{
int ind = c_imp.size()-k;
if(i < ind)
    {
        luck -= c_imp[i];
    }
    else
    {
        luck += c_imp[i];
    }
}
*/

// Failed 2 tests
/*
for(int i = 0; i < c_imp.size(); i++)
{
    if(i < c_imp.size()-k)
    {
        luck -= c_imp[i];
    }
    else
    {
        luck += c_imp[i];
    }
}
*/
