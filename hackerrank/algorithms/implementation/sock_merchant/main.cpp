// HackerRank Practice Problem
// Algorithms > Implementation > Sock Merchant

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, temp, ans = 0;
    cin >> n;
    vector <int> socks;

    for(int i = 0; i < n; i++) {
        cin >> temp;
        socks.push_back(temp);
    }

    for(int i = 0; i < socks.size(); i++) {
        for(int j = i + 1; j < socks.size(); j++) {
            if(socks[i] == socks[j]) {
                socks.erase(socks.begin()+i-1);
                socks.erase(socks.begin()+j-1);
                i--;
                ans++;
                break;
            }
        }
    }

    cout << ans;

    return 0;
}

// O(n) solution with hashtable
/*
int main(){
    int n,k, res = 0;
    cin >> n;
    map<int, int> c;
    for(int c_i = 0;c_i < n;c_i++){
        cin >> k;
        ++c[k];
    }
    for(auto i = c.begin(); i != c.end(); ++i) {
        res += i->second/2;
    }

    cout << res;
    return 0;
}*/
