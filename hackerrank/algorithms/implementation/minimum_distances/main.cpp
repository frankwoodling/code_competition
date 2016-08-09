// HackerRank Practice Problems
// Algorithms > Sorting > Intro to Tutorial Challenges

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int min = 10e6;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i]==arr[j] && (j-i) < min)
            {
                min = j-i;
            }
        }
    }

    if(min < 10e6){cout << min;}
    else{cout << -1;}
    return 0;
}