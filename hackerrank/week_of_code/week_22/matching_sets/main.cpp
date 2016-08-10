// HackerRank Week of Code
// Week of Code 22 >> Making Polygons

// Times out on tests 4 and 5
// Sorting seem necessary to add to the correct index
// be sure to use long long
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n, num, min = 0, count = 0;
    cin >> n;
    vector <int> x;
    vector <int> y;

    for(int i = 0; i < n; i++)
    {
        cin >> num;
        x.push_back(num);
    }

    for(int i = 0; i < n; i++)
    {
        cin >> num;
        y.push_back(num);
    }

    sort(x.begin(), x.begin());
    sort(y.begin(), y.begin());

    for(int i = 0; i < n; i++)
    {
        if(x[i] > y[i])
        {
            count--;
            x[i]--;
            min++;
            i--;
        }
        else if(x[i] < y[i])
        {
            count++;
            x[i]++;
            min++;
            i--;
        }
    }

    if(count != 0){cout << -1;}
    else{cout << min/2;}
    return 0;
}


//cout << x[0] << " " << x[1] << " " << x[2] << endl;
//cout << y[0] << " " << y[1] << " " << y[2] << endl;


// from the left subtract one until it matches and add it to the rightmost
// try to keep a counter, subtract one from x and add one to counter when x > y
// take one from counter and add it when x < y

// or keep a counter and find the differences of each set..
// if the counter does not equal 0 at the end it is not possible




// Too slow
/*
int main()
{
    int n, num, min = 0;
    cin >> n;
    vector <int> x;
    vector <int> y;

    for(int i = 0; i < n; i++)
    {
        cin >> num;
        x.push_back(num);
    }

    for(int i = 0; i < n; i++)
    {
        cin >> num;
        y.push_back(num);
    }

    sort(x.begin(), x.begin());
    sort(y.begin(), y.begin());

    for(int i = 0; i < n; i++)
    {
        if(i == -1)
        {
            break;
        }

        if(x[i] > y[i])
        {
            x[i]--;
            i--;
            min++;

            for(int j = n; j != 0; j--)
            {
                if(x[j] < y[j])
                {
                    x[j]++;
                    break;
                }
            }
        }
    }

    if(x != y){cout << -1;}
    else {cout << min;}

    return 0;
}*/
