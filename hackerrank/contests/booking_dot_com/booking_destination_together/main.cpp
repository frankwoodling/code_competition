// HackerRank Contest
// Booking.com, Destination:Together <3

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m, c;

    cin >> n >> m >> c;

    int j_unique = n - c;
    int z_unique = m - c;

    int tot = j_unique + z_unique + c - 1;

    int factorial = 1;

    for(int i = 1; i <= tot; i++)
    {
        factorial=factorial*i;
    }

    cout << factorial;
    return 0;
}


// test cases
// n = 1, m = 10, c = 1
// 