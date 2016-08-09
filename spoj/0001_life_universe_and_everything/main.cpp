// SPOJ
//  Life, the Universe, and Everything

#include <iostream>

int main()
{
    int num = 0;
    while(1)
    {
        std::cin >> num;

        if(num != 42)
        {
            std::cout << num << std::endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}