// HackerRank Practice Problem
// Algorithms > Implementation > Flatland Space cities

#include <iostream>
#include <vector>
#define ll long long
int main(){
    ll int n, m, distance_temp, max = 0;
    std::cin >> n >> m;
    std::vector<ll int> distances(n);
    std::vector<ll int> stations(m);

    for( int i = 0; i < m; i++){
        ll int s = -1;
        std::cin >> s;
        stations[i] = s;
    }

    for(int i = 0; i < n; i++){
        distance_temp = 10e6;

        for(int j = 0; j < m; j++){
            if(abs(i - stations[j]) < distance_temp){
                distance_temp = abs(i - stations[j]);
            }
        }
        distances[i] = distance_temp;
    }

    for(int i = 0; i < n; i++){
        if(distances[i] > max){
            max = distances[i];
        }
    }

    std::cout << max;
    return 0;
}