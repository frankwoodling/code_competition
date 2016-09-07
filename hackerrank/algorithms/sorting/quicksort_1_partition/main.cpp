// HackerRank Practice Problem
// Algorithms > Sorting > Quicksort 1 - Partition

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, pivot, temp;
    vector<int> left, right, equal;

    cin >> n >> pivot;
    equal.push_back(pivot);

    for(int i = 0; i < n - 1; i++) {
        cin >> temp;

        if(temp > pivot) {right.push_back(temp);}
        else if(temp < pivot) {left.push_back(temp);}
        else {equal.push_back(temp);}
    }

    left.insert(left.end(), equal.begin(), equal.end());
    left.insert(left.end(), right.begin(), right.end());

    for(int i = 0; i < left.size(); i++){
        cout << left[i] << " ";
    }

    return 0;
}