// HackerRank ProjectEuler+
// Project Euler #1: Multiples of 3 and 5

#include <iostream>

int main() {
    int n;

    std::cin >> n;

    int sum [n];
    int numbers [n];
    for(int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
        sum[i] = 0;
    }

    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j <  numbers[i]; i++)
            if(j%5 == 0 || j%3 == 0)
            {
                sum[i] += j;
            }
    }

    for(int i = 0; i < n; i++)
    {
        std::cout << sum[i] << std::endl;
    }
    return 0;
}

// make a function that runs n times

// works for single input
/*for(int i = 1; i < n; i++)
{
    if(i%5 == 0 || i%3 == 0)
    {
        sum += i;
    }
}*/
