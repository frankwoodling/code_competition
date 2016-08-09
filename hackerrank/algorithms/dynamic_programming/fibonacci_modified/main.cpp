// HackerRank Practice Problems
// Algorithms > Dynamic Programming > Fibonacci Modified

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<long long int>v;
    long long int t1, t2, n;
    cin >> t1 >> t2 >> n;

    v.push_back(t1);
    v.push_back(t2);

    for(int i = 0; v.size() < n; i++)
    {
        v.push_back(v[i] + pow(v[i+1], 2));
    }

    cout << v[n-1];

    return 0;
}


/*

vector<int>v;

for(int i = 0; i < n; i++)
{
cin >> x;
v.push_back(x);
}*/
