#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<long long int> arr(n);

    for(long long int arr_i = 0;arr_i < n;arr_i++)
    {
       cin >> arr[arr_i];
    }

    long long int sum = 0;

    for(long long int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << sum;

    return 0;
}
