// HackerRank Practice Problem
// Data Structures > Arrays >  2D Array - DS

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int max_sum = -10e6;

    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++)
    {
        for(int arr_j = 0;arr_j < 6;arr_j++)
        {
            cin >> arr[arr_i][arr_j];
        }
    }

    for(int i = 1; i < 5; ++i)
    {
        for (int j = 1; j < 5; ++j)
        {
            if(arr[i-1][j-1] + arr[i-1][j] + arr[i-1][j+1] + arr[i][j] + arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1] > max_sum)
            {
                max_sum = arr[i-1][j-1] + arr[i-1][j] + arr[i-1][j+1] + arr[i][j] + arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1];
            }
        }
    }

    cout << max_sum;
    return 0;
}
