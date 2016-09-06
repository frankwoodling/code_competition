// HackerRank Practice Problem
// Algorithms > Sorting > Insertion Sort - Part 1

#include <iostream>
using namespace std;

int main(){
    int n, temp;
    cin >> n;
    bool fin = false;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> temp;
        arr[i] = temp;
    }

    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            temp = arr[i + 1];
            arr[i + 1] = arr[i];

            for(int i = 0; i < n; i++){
                cout << arr[i] << " " ;
            }
        }
        cout << endl;
    }




    return 0;
}