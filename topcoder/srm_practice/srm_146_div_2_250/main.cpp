// TopCoder Practice
// SRM 146 DIV 2
// 170.49 of 250 points

#include <iostream>
#include <vector>
using namespace std;

class YahtzeeScore
{
public:
    int maxPoints(vector <int> toss){

        int sum = 0;
        int max = 0;
        for(int i = 0; i < toss.size(); i++){

            sum = i;
            for(int j = i + 1; i < toss.size(); i++){
                if(i == j)
                {
                    sum += i;
                }
            }
            if(sum > max){
                max = sum;
            }
        }
        return max;
    }
};
