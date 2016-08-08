// HackerRank Practice Problems
// Algorithms > Strings > Super Reduced String
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;


int reduce_str(string str)
{

}

int main()
{
    string init_string;
    cin >> init_string;



}




/*string reduce_str(string str)
{

}


int main ()
{
    string init_string, reduced_string;
    cin >> init_string;

    reduced_string = reduce_str(init_string);

    if(reduced_string  )
    {
        string str = "abcde";
        cout << str.length() << endl;

        for(int i = 0; i < 5; i++)
        {
            cout << str[i] << endl;

        }
    }

    return 0;
}*/

// if empty end loop
// else if not empty check for dups


// if dups == 0 print str
// else rerun function with new str





/*    char szInput[256];
    printf ("Enter a sentence: ");
    gets (szInput);
    printf ("The sentence entered is %u characters long.\n",(unsigned)strlen(szInput));*/


/*int main()
{
    string str = "abcde";
    cout << str.length() << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << str[i] << endl;

    }
    //cout << str[4] << endl << str[2];
    str.erase(3,1);
    cout << str.length() << endl;

    for(int i = 0; i < 4; i++)
    {
        cout << str[i] << endl;

    }

}*/


/*
string reduce_str(string str)
{
    int str_length =  str.length();
    int num_dups = 0;
    string str_new = "f";

    for(int i = 0; i <= str_length; i++)
    {
        if(str.length() == 0)
        {
            cout << "Empty String";
        }
        else if(str[i]==str[i-1])
        {
            num_dups++;
            str.erase(i,1);
            reduce_str(str);
        }
        else if (num_dups == 0 && str.length() > 0)
        {
            cout << str;
        }
        else
        {
            reduce_str(str);
        }
    }

    return str;
}
*/
