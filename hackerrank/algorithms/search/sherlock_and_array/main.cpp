// HackerRank Practice Problem
// Algorithms > Search > Sherlock and Array

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t, n, temp, sum_left, sum_right;
    cin >> t;
    vector<int> arr;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++){
            cin >> temp;
            arr.push_back(temp);
        }

        for(int i = 0; i < arr.size(); i++){
            for(int j = 0; j < i; j++){
                sum_left += arr[j];
            }

            for(int k = 0; k > i && k < arr.size(); i++){
                sum_right += arr[k];
            }

            if(sum_left == sum_right){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }


//        cout << endl;
//        for(int i = 0; i < arr.size(); i++){
//            cout << arr[i] << " ";
//        }
        arr.erase (arr.begin(),arr.begin()+arr.size());
    }






    return 0;
}