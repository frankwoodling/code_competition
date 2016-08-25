//HackerRank
//C++ > STL > Lower Bound-STL

#include <iostream>
#include <vector>
int main(){
    int n, temp, q, num;
    std::cin >> n;
    std::vector<int> vec;

    for(int i = 0; i < n; i++){
        std::cin >> temp;
        vec.push_back(temp);
    }

    std::cin >> q;

    for(int i = 0; i < q; i++){
        std::cin >> num;
        std::vector<int>::iterator low = lower_bound(vec.begin(), vec.end(), num);

        if (vec[low - vec.begin()] == num){
            std::cout << "Yes " << (low - vec.begin() + 1) << std::endl;
        }
        else{
            std::cout << "No " << (low - vec.begin()+1) << std::endl;
        }
    }

    return 0;
}