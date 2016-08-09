// HackerRank Practice Problems
// Algorithms > Strings > CamelCase

#include <iostream>

using namespace std;

int main()
{
    string sample, alphabet;
    getline(cin,sample);
    alphabet = "abcdefghijklmnopqrstuvwxyz";

    int count = 0;

    for(int i = 0; i < alphabet.length(); i++)
    {

        for(int j = 0; j < sample.length(); j++)
        {
            sample[j] = tolower(sample[j]);
            if(sample[j] == alphabet[i])
            {
                count++;
                break;
            }
        }
    }

    if(count == 26){cout << "pangram";}
    else{cout << "not pangram";}
}


// sorts then unique removes unique characters in a row
/*

for(int i = 0; i < s.length(); i++) {
s.at(i) = tolower(s.at(i));
}
sort(s.begin(), s.end());
s.erase(unique(s.begin(), s.end()), s.end());
s.erase(s.begin());

if(s.length() == 26)
cout << "pangram" << endl;
else
cout << "not pangram" << endl;
*/
