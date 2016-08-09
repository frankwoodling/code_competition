// HackerRank Practice Problems
// Algorithms > Strings > Mars Exploration

#include <iostream>
using namespace std;


int main(){
    string str; cin >> str;
    int count = 0;
    string str_correct = "SOS";
    int str_len = str.length();
    int str_duplicates = str_len/3;

    for(int i = 1; i < str_duplicates; i++)
    {
        str_correct += "SOS";
    }

    for(int i = 0; i < str_len; i++)
    {
        if(str_correct[i] != str[i])
        {
            count++;
        }
    }

    cout << count;
    return 0;
}

