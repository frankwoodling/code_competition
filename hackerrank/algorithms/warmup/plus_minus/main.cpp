// HackerRank Practice
// Algorithms, Diagonal Difference

#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int n;
    double zero, pos, neg = 0;

    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++)
    {
        cin >> arr[arr_i];
        pos += (arr[arr_i] > 0);
        neg += (arr[arr_i] < 0);
    }

    zero = n-pos-neg;

    cout << pos/n << endl;
    cout << neg/n << endl;
    cout << zero/n << endl;

    return 0;
}
