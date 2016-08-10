// HackerRank Practice Problem
// Algorithms > Implementation > Beautiful Triplets

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, d, num, triplets = 0;
    cin >> n >> d;
    vector<int> v;

    for(int i = 0; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
    }

    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i < j; i++)
        {
            if(v[j] - v[i] == d)
            {
                for (int k = i + 1; k < n; k++)
                {
                    if (v[j] - v[i] == d && v[k] - v[j] == d)
                    {
                        triplets++;
                    }
                }
            }
        }
    }
    cout << triplets;

    return 0;
}

// could optimize since if a[j]-a[i] > d you can skip the rest since it is a sorted vector
// the same is true for a[k]-a[j]
// once you find one you can break that loop

// O(n) solution
/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,d;
    cin >> n >> d;

    vector<int> v(n);
    unordered_map<int,int> s;
    int count(0);

    for(int i = 0; i < n; ++i){
        cin >> v[i];
        s[v[i]] = i;
    }

    for(int i = 0; i < n-2; ++i){
        auto j = s.find(v[i] + d);
        if(j != s.end()){
            auto k = s.find(v[i]+ d + d);
            if(k != s.end()){
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}*/
