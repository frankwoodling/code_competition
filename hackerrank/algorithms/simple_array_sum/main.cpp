// HackerRank Domain Problems
// Algorithms, Simple Array Sum

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;


int main()
{
    int arr[5] = {1, 2, 3, 6, 7};

    cout << sizeof(arr)/sizeof(arr[0]) << endl;


    for (int i = 0; i <= 5; i++)
    {
        cout << arr[i];
    }

}
/*
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> arr[arr_i];
    }
    return 0;
}
 */