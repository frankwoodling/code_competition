// HackerRank Week of Code 24
// Week of Code 24 > Happy Ladybugs

#include <iostream>

using namespace std;

int main() {
    int g, n, count = 0;
    string game;
    cin >> g;

    for(int i = 0; i < g; i++) {
        cin >> n;
        cin >> game;

        for(int j = 0; j < n; j++) {
            char temp = game[j];
            count = 0;
            for(int k = j + 1; k < n; k++) {
                if(game[j] == temp) {
                    count++;
                }
            }

            if(count % 2 != 0 )
        }
    }


    return 0;
}