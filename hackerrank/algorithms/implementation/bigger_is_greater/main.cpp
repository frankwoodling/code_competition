// HackerRank Practice Problem
// Algorithms > Implementation > Bigger is Greater
// Adapted from https://www.nayuki.io/page/next-lexicographical-permutation-algorithm
#include <iostream>
using namespace std;

string next_lexicographic(string w){
    int i, j;

    i = w.size() - 1;

    while (i > 0 && w[i - 1] >= w[i]) {
        i--;
    }
    if (i == 0)
        return "no answer";

    j = w.size() - 1;
    while (w[j] <= w[i - 1]) {
        j--;
    }
    char temp = w[i - 1];
    w[i - 1] = w[j];
    w[j] = temp;

    j = w.size() - 1;
    while (i < j) {
        temp = w[i];
        w[i] = w[j];
        w[j] = temp;
        i++;
        j--;
    }

    return w;
}

int main(){
    int n;
    string w, ans;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> w;
        ans = next_lexicographic(w);
        cout << ans << endl;
    }
}

// Can also use next-permutation
