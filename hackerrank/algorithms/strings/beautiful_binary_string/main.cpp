// HackerRank Practice Problem
// Algorithms > Strings > Beautiful Binary String

#include <iostream>

int main(){
    std::string arr;
    int n, count = 0;
    std::cin >> n >> arr;

    // 48 and 49 are ascii values for 0 and 1
    for(int i = 0; i < n; i++){
        if(int(arr[i]) == 48 && int(arr[i+1]) == 49 && int(arr[i+2]) == 48){
            count++;
            i += 2;
        }
    }

    std::cout << count;
    return 0;
}