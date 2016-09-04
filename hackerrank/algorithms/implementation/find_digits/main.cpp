// HackerRank Practice Problem
// Algorithms > Implementation > Find Digits

#include <iostream>

int main(){
    long long int t, n_init, n, d = 0, count = 0;;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n_init;
        n = n_init;

        while (n > 0) {
            d = n % 10;
            if (d != 0 && n_init%d == 0) {
                count++;
            }
            n = n / 10;
        }
        std::cout << count << std::endl;
        count = 0;
    }
    return 0;
}