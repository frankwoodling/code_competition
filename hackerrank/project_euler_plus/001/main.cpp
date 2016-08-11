// HackerRank ProjectEuler+
// ProjectEuler+  Project Euler #1: Multiples of 3 and 5
// Fails tests 2 and 3
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

// takes a number, populates a vector of multiples of 3 or 5, then sums and returns the vector
ll int find_mult_sum(ll int num){
    vector <ll unsigned int> vec_mult;
    ll int sum = 0;

    for(int i = 2; i < num; i++){
        if(i%3 == 0 || i%5 == 0){
            vec_mult.push_back(i);
        }
    }

    for(int i = 0; i < vec_mult.size(); i++){
        sum += vec_mult[i];
    }
    return(sum);
}

int main() {
    int n, input_temp;
    cin >> n;
    vector <ll unsigned int> vec_input, vec_sum;

    for(int i = 0; i < n; i++){
        cin >> input_temp;
        vec_input.push_back(input_temp);
    }

    for(int i = 0; i < vec_input.size(); i++){

        vec_sum.push_back(find_mult_sum(vec_input[i]));
    }


    for (int i = 0; i < vec_sum.size(); ++i) {
        cout << vec_sum[i] << endl;
    }

    return 0;
}


/*
As you have big numbers of iterations...You can do the following:
Step 1: Add the numbers divisible by 3
Step 2:Add the numbers divisible by 5
Step 3:subtract numbers divisible by 15(As they are doubled)
Use arithmatic progression formula to get rid of loops.*/


/*
long N,num,three,five,fifteen=0;
cin>>N;

for(int i=0;i<N;i++)
{
cin>>num;
//int sum=0;
three=(num-1)/3;
five=(num-1)/5;
fifteen=(num-1)/15;

cout << 3*(three*(three+1)/2)+5*(five*(five+1)/2)-15*(fifteen*(fifteen+1)/2)<<endl;

}
return 0;*/
