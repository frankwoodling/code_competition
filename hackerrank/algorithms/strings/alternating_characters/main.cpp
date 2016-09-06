// HackerRank Practice Problem
// Algorithms > Strings > Alternating Characters

#include <iostream>

using namespace std;

int main(){
    int t, count = 0;
    cin >> t;
    string str;


    for(int j = 0; j < t; j++){
        cin >> str;

        for (int i = 0; i < str.length() - 1; i++){
            if (str[i] == str[i + 1]){
                str.erase(i + 1, 1);
                i--;
                count++;
            }
        }
        cout << count << endl;
        count = 0;
    }

    return 0;
}