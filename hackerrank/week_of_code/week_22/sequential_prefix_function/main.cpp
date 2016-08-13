// HackerRank Week of Code 22
// Sequential Prefix Function (advanced)
// Incomplete
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;
    vector <int> set;
    char sign;
    int x;


    for(int i = 0; i < n; i++){
        cin >> sign;

        if(sign == '+'){
            cin >> x;
            set.push_back(x);
        }
        else if(sign == '-'){
            set.pop_back();
        }

        if(set.size() == 0 || set.size() == 1){
            cout << 0 << endl;
        }
        else if(set.size()%2 == 0){
            for(int i = 0; i < set.size(); i++)
            {
                cout << 0 << endl;
            }
        }

    }

    return 0;
}

// must find a k where left side == right side of k if k is even
// if k is odd the middle value is used in both sides


// ex for (1,1,1) check if (1,1) = (1,1)