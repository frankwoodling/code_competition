// CodeForces live
// Round #367 Div II A. Beru-taxi
// Failed test #41, needed to print answer with higher precision

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double check_taxi(double taxi_x,  double taxi_y, double taxi_v, double home_x, double home_y){
    int distance = sqrt(pow(taxi_x-home_x, 2)+pow(taxi_y-home_y, 2));
    return distance/taxi_v;
}

int main()
{
    vector <double> vec_home(2), vec_taxi, vec_time;
    int n;
    double min = 10E6;
    cin >> vec_home[0] >> vec_home[1];
    cin >> n;


    for(int i = 0; i < n*3; i++){
        int taxi_coord;
        cin >> taxi_coord;
        vec_taxi.push_back(taxi_coord);
    }

    for(int i = 0; i < vec_taxi.size(); i++){
        vec_time.push_back(check_taxi(vec_taxi[i], vec_taxi[i+1], vec_taxi[i+2], vec_home[0], vec_home[1]));
        //vec_time.push_back(sqrt(pow(vec_taxi[i]-vec_home[0], 2)+pow(vec_taxi[i+1]-vec_home[1], 2))/vec_taxi[i+2]);
        i+= 2;
    }

    for(int i = 0; i < vec_time.size(); i++){
        if(vec_time[i] < min){
            min = vec_time[i];
        }
    }

    cout << min;
}



// great readable solution
/*
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int a, b;
int n;

double dist(int x, int y)
{
    return sqrt((a - x) * (a - x) + (b - y) * (b - y));
}

int main()
{
    cin >> a >> b;
    cin >> n;
    double naj = -1;
    for(int i = 0; i < n; i++)
    {
        int x, y, v;
        cin >> x >> y >> v;
        double t = dist(x, y) / (double)v;
        if(naj == -1) naj = t;
        else naj = min(naj, t);
    }
    printf("%.9lf\n", naj);
}

*/

