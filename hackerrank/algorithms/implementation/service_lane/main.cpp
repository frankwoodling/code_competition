// HackerRank Practice Problem
// Algorithms > Implementation > Service Lane

#include <iostream>
#include <vector>
//using namespace std;

int main() {
    int n, t, temp, start, fin;
    std::cin >> n >> t;
    std::vector<int> vec;

    for(int i = 0; i < n; i++) {
        std::cin >> temp;
        vec.push_back(temp);
    }

    for(int i = 0; i < t; i++){
        temp = 4;
        std::cin >> start >> fin;

        for(int j = start; j <= fin; j++) {
            if(vec[j] < temp) {
                temp = vec[j];
            }
        }
        std::cout << temp << std::endl;
    }

    return 0;
}