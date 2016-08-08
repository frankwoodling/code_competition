// HackerRank Practice Problems
// Algorithms > Strings > Super Reduced String
#include <iostream>

using namespace std;
bool reduce_fin = false;

string reduce_str(string str)
{
    int ind_removed = 0;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i]==str[i+1])
        {
            str.erase(i,2);
            ind_removed = ind_removed + 2;
        }
    }

    if(ind_removed == 0)
    {
        reduce_fin = true;
    }

    return str;
}

int main()
{
    string input_str;
    cin >> input_str;

    while(!reduce_fin)
    {
        input_str = reduce_str(input_str);
    }

    if(input_str.length()==0)
    {
        cout << "Empty String";
    }
    else
    {
        cout << input_str;
    }
}

// much better solution
/*
string str; cin >> str;
int i=0;

while(i < static_cast< int > (str.size()-1)) {
if(i>-1 && str[i] == str[i+1]) {
str.erase(i,2);
i--;
} else
i++;
}

if(str.empty())
cout << "Empty String" << endl;
else
cout << str << endl;
*/
