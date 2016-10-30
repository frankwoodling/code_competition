// HackerRank Codesprint
// WalmartLabs Codesprint (Algorithms) > Hiking Selfies

#include <iostream>
#include <cmath>

int main() {
    int n, x;
    std::cin >> n >> x;

    int subsets = pow(2, n)-1;

    if(subsets >= x) {
        std::cout << subsets-x;
    }
    else if(subsets <= x) {
        std::cout << x-subsets;
    }

    return 0;
}