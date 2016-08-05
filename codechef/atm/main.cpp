// CodeChef Practice Problem
// ATM
#include <iostream>

using namespace std;

int main()
{
    int withdrawal;
    double balance;

    cin >> withdrawal >> balance;

    if((withdrawal + 0.5)> balance)
    {
        printf("%.2f", balance);
    }
    else if(withdrawal%5 != 0)
    {
        printf("%.2f", balance);
    }
    else
    {
        printf("%.2f", balance - withdrawal - 0.50);
    }

    return 0;
}
