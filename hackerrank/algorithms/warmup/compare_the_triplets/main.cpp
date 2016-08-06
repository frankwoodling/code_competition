#include <iostream>

using namespace std;


int main(){
    int a0, a1, a2;
    cin >> a0 >> a1 >> a2;

    int b0, b1, b2;
    cin >> b0 >> b1 >> b2;

    int score_alice = 0;
    int score_bob = 0;

    if(a0 > b0)
    {
        score_alice += 1;
    }
    else if(b0 > a0)
    {
        score_bob += 1;
    }

    if(a1 > b1)
    {
        score_alice += 1;
    }
    else if(b1 > a1)
    {
        score_bob += 1;
    }

    if(a2 > b2)
    {
        score_alice += 1;
    }
    else if(b2 > a2)
    {
        score_bob += 1;
    }

    cout << score_alice << " " << score_bob;

    return 0;
}

// clever code from discussion

/*
int as=(a0>b0)+(a1>b1)+(a2>b2),bs=(b0>a0)+(b1>a1)+(b2>a2);
cout << as << " " << bs;
*/
