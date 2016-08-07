// HackerRank Practice Problem
// Mathematics > Fundamentals > Find Point

#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int cases[n][4];
    int sym_point [n][2];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            std::cin >> cases[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            sym_point[i][j] = 2*cases[i][j] - cases[i + 2][j + 2];
        }
    }
    std::cout << sym_point[0][0] << sym_point[1][1];
    return 0;
}