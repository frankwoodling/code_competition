// HackerRank Week of Code 24
// Week of Code 24 > Apple and Orange

#include <iostream>

int main() {
    long long int s, t, a, b, m, n, temp;
    long long int count_apple = 0, count_orange = 0;
    std::cin >> s >> t >> a >> b >> m >> n;

    for(int i = 0; i < m; i++) {
        std::cin >> temp;

        if(a + temp >= s && a + temp <= t) {
            count_apple++;
        }
    }

    for(int i = 0; i < n; i++) {
        std::cin >> temp;

        if(b + temp <= t && b + temp >= s) {
            count_orange++;
        }
    }

    std::cout << count_apple << std::endl;
    std::cout << count_orange;

    return 0;
}

