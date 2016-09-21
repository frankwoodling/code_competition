// HackerRank Competition
// Week of Code 23 > Lighthouse

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<char>> vec;
    vec.resize(n, vector<char>(n, '-'));

    for(int i = 0; i < 19; i ++) {
        vec.push_back('*');
    }
    // for(int i = 0; i < n)


    return 0;
}