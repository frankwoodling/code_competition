// HackerRank Practice Problem
// C++ > STL > Vector-Erase
#include <iostream>
#include <vector>

int main(){
    long long int n, ind_rem;
    std::cin >> n;
    std::vector<long long int> vec, range(2);

    for(int i = 0; i < n; i++){
        long long int temp;
        std::cin >> temp;
        vec.push_back(temp);
    }

    std::cin >> ind_rem;
    std::cin >> range[0];
    std::cin >> range[1];

    vec.erase(vec.begin()+ind_rem);
    vec.erase(vec.begin()+range[0]-1, vec.begin()+range[1]-1);

    std::cout << vec.size() << std::endl;
    for(int i =0; i < vec.size(); i++){
        std::cout << vec[i] << " ";
    }
    return 0;
}

