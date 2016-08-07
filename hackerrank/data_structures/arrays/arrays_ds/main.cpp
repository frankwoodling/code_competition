// HackerRank Practice Problems
// Data Structures > Arrays > Arrays - DS
#include <iostream>
#include <vector>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> arr[arr_i];
    }

    for(int i = n - 1; i > -1; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}