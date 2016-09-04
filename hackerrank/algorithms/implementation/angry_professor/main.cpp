// HackerRank Practice Problem
// Algorithms > Implementation > Angry Professor

#include <iostream>

using namespace std;

int main(){
    long long int t, n, k, temp, count = 0;
    cin >> t;

    for(int j = 0; j < t; j++) {
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> temp;

            if (temp > 0){
                count++;
            }
        }
        if (count >= k) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
        count = 0;
    }


    return 0;
}


// could create a vector and sort it, then see if i[k-1] <= 0