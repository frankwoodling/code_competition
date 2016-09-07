// HackerRank Practice Problem
// Algorithms > Strings > Funny String

#include <iostream>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;


    for(int j = 0; j < t; j++) {
        cin >> s;
        bool result = true;

        for (int i = 0; i < s.size() - 1; i++) {
            if (abs(s[i] - s[i + 1]) != abs(s[s.size() - i - 1] - s[s.size() - i - 2])) {
                cout << "Not Funny" << endl;
                result = false;
                break;
            }
        }
        if (result) {
            cout << "Funny" << endl;
        }
    }

    return 0;
}