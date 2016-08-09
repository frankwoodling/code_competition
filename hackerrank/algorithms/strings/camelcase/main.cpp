// HackerRank Practice Problems
// Algorithms > Strings > CamelCase

#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    int count = 1;

    for(int i = 0; i < s.length(); ++i)
    {
        if(isupper(s[i]))
        {
            count++;
        }
    }

    cout << count;
}


// There was no test case with an empty string or I would add this:
/*
if(s.length() > 0)
{
    count++;
}
*/
