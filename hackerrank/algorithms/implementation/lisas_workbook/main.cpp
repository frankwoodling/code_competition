// HackerRank Practice Problem
// Algorithms > Implementation > Lisa's Workbook

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, temp;
    cin >> n >> k;
    vector<int> problem_page[n];

    for(int i = 0; i < n; i++) {
        cin >> temp;

        for(int j = 1; j < temp + 1; j++) {
            if(j < k) {
                problem_page->push_back()
            }
        }
    }

//    for(int i = 0; i < n; i++) {
//        cin >> temp;
//        problems[i] = temp;
//    }

//    for(int i = 0; i < n; i++) {
//        cout << problems[i] << " ";
//    }

    return 0;
}

// 4/3 = 1 page
// + 1 page if the remainder is greater than 0
// find the page number by summing all chapters up to and including the current chapter


// expected 1 1 1 2 3 3 4 4 4 5 5 5 1 7 7 7 8 8 8 9 9 9 10