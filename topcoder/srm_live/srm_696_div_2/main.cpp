// TopCoder Practice
// SRM 696 DIV 2
// 0 of 250 points

// Did not complete 250 challenge
// Code is a mess. There must be a better way to do this.
// I had issues comparing
#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

class Ropestring
{
public:
    string makerope(string s)
    {
        char dash = '-';
        string period = ".";
        vector<int> s_n;
        vector<int> rope_len;
        vector<int> rope_dots;
        vector<int> rope_even;
        vector<int> rope_odd;
        vector<int> s_fin;

        int count = 0;

        for(int i = 0; i <= s.size() -1; i++)
        {
            s_n.push_back(s[i]);
        }

        for(int i = 0; i <= s_n.size(); i++)
        {
            if(s_n[i] == 45)
            {
                count++;
            }
            else if(s_n[i != 45])
            {
                if(count > 0)
                {
                    rope_len.push_back(count);
                }

                count = 0;
            }
        }

        for(int i = 0; i <= s_n.size(); i++)
        {
            if(s_n[i] == 46)
            {
                rope_dots.push_back(1);
            }
        }

        for(int i = 0; i <= rope_len.size(); i++)
        {
            if(rope_len[i]%2 == 0)
            {
                rope_even.push_back(rope_len[i]);
            }
            else
            {
                rope_odd.push_back(rope_len[i]);
            }
        }

        sort(rope_even.begin(),rope_even.end());
        sort(rope_odd.begin(),rope_odd.end());

        for(int i = 0; i <= rope_even.size(); i++)
        {

        }


        // delete when done
        for(int i = 0; i <= rope_odd.size() - 1; i++)
        {
            //cout << rope_len[i] << " ";
            //cout << rope_dots[i] << " ";
            //cout << rope_odd[i] << " ";
        }

        return("ok");
    }


};

int main()
{
    Ropestring ID;
    string a = "--..-.---..--";
    string ans = "--.--.---.-..";
    ID.makerope(a);
    string X = "---.-";
    string Y = "-.---";
    //convertToASCII(a);


//    cout << (X[1] < Y[1]);
//    cout << (X < Y);
}


// Similar solution to what I was trying

#define FOR(i,a,b) for(int i =(a);i<(int)(b);++i)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(), (x).end()
#define ZERO(a) memset(a,0,sizeof(a))
#define pb push_back
#define mp make_pair
