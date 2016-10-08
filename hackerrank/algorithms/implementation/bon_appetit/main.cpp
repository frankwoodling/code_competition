// HackerRank Practice Problem
// Algorithms > Implementation > Bon Appétit

#include <iostream>

int main() {
    long long int n, k, actual, temp, charged = 0;
    std::cin >> n >> k;

    for(int i = 0; i < n; i++) {
        std::cin >> temp;
        charged += temp;

        if(i == k) {
            charged -= temp;
        }
    }

    std::cin >> actual;

    if(charged/2 == actual) {
        std::cout << "Bon Appetit";
    }
    else {
       std::cout << abs(charged/2-actual);
    }

    return 0;
}
