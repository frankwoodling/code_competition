// HackerRank Practice Problem
// Algorithms > Implementation > Repeated String
// Incomplete

#include <iostream>

int main() {
    std::string str;
    std::cin >> str;
    long long int n, ans = 0;
    std::cin >> n;
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

    std::cout << ans;

    return 0;
}