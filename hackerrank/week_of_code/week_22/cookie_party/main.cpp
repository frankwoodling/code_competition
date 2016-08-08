// HackerRank Practice Problems
// Week of Code 22 > Cookie Party

// Fails test cases 2 and 5

#include <iostream>

using namespace std;


int main(){
    int n;
    int m;
    cin >> n >> m;

    if(n < m && m%n == 0){cout << 0;}
    else if(n > m && n%m == 0){cout << n-m;}
    else if(n == m){cout << 0;}
    else if(m > n){cout << n-m%n;}
    else if(m < n){cout << m+n%m;}

    return 0;
}

/*
 * case 1: n = 1, m = 10000   should return 0
 * case 2: n = 10000, m = 1 should return 9999
 * case 3: n = 10, m = 10 should return 0
 * case 4: n = 3, m = 7 should return 2
 * case 5: n = 7, m = 3 should return 4
 * //case 5: n = 7, m = 10000
 */