// HackerRank Competition
// Week of Code 23 > Gears of War

#include <iostream>

int main() {
    int q, n;
    std::cin >> q;

    for(int i = 0; i < q; i++) {
        std::cin >> n;

        if(n%2 == 0) {
            std::cout << "No\n";
        }
        else {
            std::cout << "Yes\n";
        }
    }

    return 0;
}