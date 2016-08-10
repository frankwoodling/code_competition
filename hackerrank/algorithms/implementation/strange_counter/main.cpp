// HackerRank Practice Problem
// Algorithms > Implementation > Strange Counter

#include <iostream>

int main()
{
    int long unsigned time_current, value_current, t;
    std::cin >> t;
    time_current = 1;
    value_current= 3;

    for(int i = 0; time_current + value_current -1 <= t; i++)
    {
        time_current = time_current + value_current;
        value_current = 2 * value_current;
    }

    std::cout << value_current - (t - time_current);

    return 0;
}

// old code too slow for some tests
/*int main()
{
    long long unsigned int value_init, value_current, t;
    std::cin >> t;
    value_init = 3;
    value_current= 3;

    for(int i = 1; i < t; i++)
    {
        value_current--;

        if(value_current == 0)
        {
            value_init *= 2;
            value_current = value_init;
        }
    }

    std::cout << value_current;
}*/