// HackerRank Week of Code
// Week of Code 22 >> Making Polygons

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>v;
    int side, n, sum = 0;

    cin >> n;

    for(int i = 0; i < n; i ++)
    {
        cin >> side;
        v.push_back(side);

        if(i < n - 1)
        {
            sum+= side;
        }
    }


    if(v[n-1] < sum)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
    }

    return 0;
}