// TopCoder Practice
// SRM 149 DIV 2
// x of 250 points


#include <iostream>
#include <cstdio>

using namespace std;

class FormatAmt{
public:
    string amount(int dollars, int cents){

        if(!dollars){
            return "a";
        }
    }
};

int main(){
    double test = 1*.09;
    //cout << test;
    string t = "a";
    int cx;
//    string b = snprintf ("$%4.2f", test);
    char buffer [100];
    cx = snprintf (buffer, 100, "The half of %d is %d", 60, 60/2);
    cout << cx;

    return 0;
}

// use to_string(int) and concatenate and keep checking dollars%10 and then divide dollars by 10