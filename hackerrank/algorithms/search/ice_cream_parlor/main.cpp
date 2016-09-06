// HackerRank Practice Problem
// Algorithms > Search > Ice Cream Parlor
// Solution works but may be slow, there might be an n log n solution
#include <iostream>
using namespace std;

int main(){
    int t, m, n, temp, ic_1, ic_2, ic_1_value, ic_2_value;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> m >> n;
        int arr[n];

        for(int j = 0; j < n; j++){
            cin >> temp;
            arr[j] = temp;
        }

        for(int k = 0; k < n; k++){
            for(int l = k + 1; l < n; l++){
                if(arr[k] + arr[l] == m){
                    ic_1 = k + 1;
                    ic_2 = l + 1;
                    ic_1_value = arr[k];
                    ic_2_value = arr[l];
                    cout << ic_1 << " " << ic_2 << endl;
                    break;
                }
            }
            if(ic_1_value + ic_2_value == m){
                break;
            }
        }
    }

    return 0;
}