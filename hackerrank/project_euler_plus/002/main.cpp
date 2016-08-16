// HackerRank
// ProjectEuler+ > Project Euler #2: Even Fibonacci numbers

#include <iostream>


// This code passes the example test case, and should work.
// There may be an integer overflow problem in the other tests.
int main(){
    long long unsigned int t, n, a = 1, b = 2, sum = 0, even_sum = 2;
    std::cin >> t;

    for(int i = 0; i < t; i++) {
        std::cin >> n;

        while (sum < n) {
            sum = a + b;
            a = b;
            b = sum;

            if (sum < n) {
                if (sum % 2 == 0) {
                    even_sum += sum;
                }
            }
        }
        std::cout << even_sum << std::endl;
    }

    return 0;
}