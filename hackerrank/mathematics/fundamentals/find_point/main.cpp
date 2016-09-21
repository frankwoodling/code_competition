// HackerRank Practice Problem
// Mathematics > Fundamentals > Find Point

#include <iostream>

int main()
{
    int t, px, py, qx, qy, ans_x, ans_y;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> px >> py >> qx >> qy;

        ans_x = 2*qx-px;
        ans_y = 2*qy-py;

        std::cout << ans_x << " " << ans_y << std::endl;
    }
    return 0;
}