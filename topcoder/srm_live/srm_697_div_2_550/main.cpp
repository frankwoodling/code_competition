// TopCoder Live
// SRM 697 DIV 2
// 0 of 550 points

// Incomplete
// Need to find all possible sets of a using numbers from possible_num
// Vector could contain up to 50 elements
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class DivisibleSetDiv2{
public:
    string isPossible(vector <int> b){
        vector<int> possible_num(11);
        vector<int> a(b.size());

        for(int i = 1; i < 12; i++){
            possible_num[i] = pow(2,i);
        }

//        for(int i = 0; i < possible_num.size(); i++){
//            cout << possible_num[i] << " ";
//        }

        for(int i = 0; i < b.size();i++){
            for(int j = 0; j < possible_num.size(); j++){
                a[i] = possible_num[j];

                for(int k = 0; k < a.size(); k++){
                    cout << a[k] << " ";
                }
                cout << endl;
            }
        }
        return "a";
    }
};


int main() {
    DivisibleSetDiv2 ID;
    vector<int> b = {3, 3, 3};
    ID.isPossible(b);
    return 0;
}