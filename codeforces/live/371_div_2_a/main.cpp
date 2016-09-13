// CodeForces Live
// #371 Div 2 Problem A

#include <iostream>
#include <algorithm>
int main() {
    long long int vec[5];
    long long int temp, ans;

    for(int i = 0; i < 5; i++){
        std::cin >> temp;
        vec[i] = temp;
    }

    ans = std::min(vec[3], vec[1]) - std::max(vec[2],vec[0]) + 1;

    if(vec[4] <= vec[1] && vec[4] >= vec[0] && vec[4] >= vec[2] && vec[4] <= vec[3]) {
        ans--;
    }

    if(ans < 0) {
        ans = 0;
    }

    std::cout << ans;

    return 0;
}
