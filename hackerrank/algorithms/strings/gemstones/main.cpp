// HackerRank Practice Problem
// Algorithms > Strings > Gemstones

// Passes all tests, but there should be a faster algorithm
// Currently it must go through a-z for each rock string.
// We should only have to test for a maximum of the length of the first rock string.
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, count;
    cin >> n;
    string test = "abcdefghijklmnopqrstuvwxyz";
    string a;
    int arr[26] = {0};

    for(int i = 0; i < n; i++){
        cin >> a;
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());

        for (int i = 0; i < test.size(); ++i){
            for(int j = 0; j < a.size(); j++){
                if(test[i] == a[j]){
                    arr[i]++;
                }
            }
        }
    }

    for(int i = 0; i < 26; i++){
        if(arr[i] == n){
            count++;
        }
    }

    cout << count;

    return 0;
}
