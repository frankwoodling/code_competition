// TopCoder Practice
// SRM 147 DIV 2
// x of 250 points
// incomplete

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

class DivisorDigits{
public:
    int howMany(int number){
        int divisors = 0;
        int digit;
        int num_rem = number;


        while(num_rem >= 0){
            digit = num_rem%10;

            //cout << digit << endl;
            if(number%digit == 0){
//                cout << "ok" << endl;
//                cout << digit;
                divisors++;
            }

            if(num_rem < 10){
                break;
            }
            else{
                num_rem /= 10;
            }

        return divisors;
        }

        //cout << digit << endl << num_rem;

    return divisors;
    }
};

int main(){
    DivisorDigits dg;
    int a = dg.howMany(12345);

//    cout << a << endl;
//    cout << 12345%1;

//    int a = 12345;
//    cout << a%10;

}




/*
#include <sstream>      // std::stringstream, std::stringbuf

int main () {
    std::stringstream ss;
    ss.str ("Example string");
    std::string s = ss.str();
    std::cout << s << '\n';
    return 0;
}*/

/*
int main(){
    DivisorDigits ID;
    int a = 61232;
    string b = to_string(a);
    //ID.howMany(12345);
    //cout << a << endl << b.size();
    cout << a%b[1];

    if(a%b[1] == 0)
    {
        cout << "ok";
    }
    cout << endl << b[0];
}
*/

