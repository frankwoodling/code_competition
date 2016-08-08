// HackerRank Practice Problem
// Algorithms > Implementation > Divisible Sum Pairs

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, k;
    int pairs = 0;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if((a[i]+a[j])%k == 0)
            {
                pairs++;
            }
        }
    }

    cout << pairs;
    return 0;
}