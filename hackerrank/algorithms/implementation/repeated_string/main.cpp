// HackerRank Practice Problem
// Algorithms > Implementation > Repeated String
// Incomplete

#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    long long int n, ans = 0;
    cin >> n;
    long long int rem = n%str.size();

    for(int i = 0; i < str.size(); i++) {
        if(str[i] == 'a') {
            ans++;
        }
    }

    ans = (n/str.size())*ans;

    if(rem != 0) {
        for(int i = 0; i < rem; i++) {
            if(str[i] == 'a') {
                ans++;
            }
        }
    }

    cout << ans;

    return 0;
}