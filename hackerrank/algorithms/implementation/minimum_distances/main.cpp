// HackerRank Practice Problems
// Algorithms > Sorting > Intro to Tutorial Challenges

#include <iostream>
#include <vector>
using namespace std;

int main()
{
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
            cout << arr[j];
        }
        cout << endl;
    }
    return 0;
}