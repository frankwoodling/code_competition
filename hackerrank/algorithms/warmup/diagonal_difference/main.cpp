// HackerRank Practice
// Algorithms, Diagonal Difference

#include <cmath>
#include <vector>
#include <iostream>

using namespace std;


int main(){
    int n;
    int sum = 0;

    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));

    for(int a_i = 0;a_i < n;a_i++)
    {
        for(int a_j = 0;a_j < n;a_j++)
        {
            cin >> a[a_i][a_j];
        }
    }

    for(int a_i = 0;a_i < n;a_i++)
    {
        sum += a[a_i][a_i];
        sum -= a[a_i][n-1-a_i];
    }

    cout << abs(sum);

    return 0;
}




// old code
/*    // primary diagonal loop

    for(int i = 0;i < n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == j)
            {
                //cout << a[i][j] << endl;
                sum_primary += a[i][j];
            }
        }
    }


    int cols = n - 1;

    for(int i = 0;i < n;i++)
    {

        for(int j = 0;j < n;j++)
        {
            if(j = cols)
            {
                cout << a[i][j] << endl;
                sum_secondary += a[i][j];
                cols--;
            }


            //cout << a[i][j] << endl;
        }

    }*/