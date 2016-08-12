//HackerRank Practice Problem
// Algorithms > Implementation > Jumping on the Clouds: Revisited

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k, energy = 100;
    vector <int> clouds;
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        int c;
        cin >> c;
        clouds.push_back(c);
    }

    for(int i = 0; i < clouds.size(); )
    {
        i += k;
        i = i%n;

        if(clouds[i] == 1){
            energy -= 3;
        }
        else if(clouds[i] == 0){
            energy -= 1;
        }

        if(i == 0){
            cout << energy;
            break;
        }
    }
    return 0;
}

