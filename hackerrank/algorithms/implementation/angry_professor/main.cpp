// HackerRank Practice Problem
// Algorithms > Implementation > Angry Professor

#include <iostream>

int main(){
    long long int t, n, k, temp, count = 0;
    std::cin >> t;

    for(int j = 0; j < t; j++) {
        std::cin >> n >> k;
        for (int i = 0; i < n; i++) {
            std::cin >> temp;

            if (temp > 0){
                count++;
            }
        }
        if (count <= n - k) {
            std::cout << "NO" << std::endl;
        }
        else {
            std::cout << "YES" << std::endl;
        }
        count = 0;
    }


    return 0;
}


// could create a vector and sort it, then see if i[k-1] <= 0
