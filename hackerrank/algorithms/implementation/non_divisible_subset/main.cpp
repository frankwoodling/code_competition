// HackerRank Practice Problem
// Algorithms > Implementation > Non-Divisible Subset

// Incomplete, passed 2/15 test cases
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k, temp;
    cin >> n >> k;
    vector<int> s;
    vector<int> s_prime;

    for(int i = 0; i < n; i++) {
        cin >> temp;
        s.push_back(temp);
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if((s[i]+s[j])%k != 0) {
                s_prime.push_back(s[i]);
                s_prime.push_back(s[j]);
            }
        }
    }

    sort(s_prime.begin(), s_prime.end());
    s_prime.erase(unique(s_prime.begin(), s_prime.end()), s_prime.end());
    
//    for(int i = 0; i < s_prime.size(); i++) {
//        cout << s_prime[i] << " ";
//    }
    cout << s_prime.size();
    return 0;
}


// (A%K) + (B%K) = K