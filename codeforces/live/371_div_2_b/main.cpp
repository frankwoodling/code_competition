// CodeForces Live
// #371 Div 2 Problem B

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, temp, max;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> temp;
        arr[i] = temp;
    }

    max = *max_element(arr, arr+n);

    for(int i = 0; i <= max; i++) {

    }

    return 0;
}
