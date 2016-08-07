// HackerRank Practice Problems
// Algorithms/Warmup/Time Conversion

#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    string time;
    cin >> time;

    if(string(1,time[8]) == "P" && time.substr(0,2)!="12")
    {
        int hours = stoi(string(1,time[0]) + string(1,time[1])) + 12;
        cout << hours << time.substr(2,6);
    }
    else if(time.substr(0,2)=="12" && time.substr(8,2)=="AM")
    {
        cout<< "00" << time.substr(2,6); return 0;
    }
    else
    {
        cout << time.substr(0,8);
    }

    return 0;
}


// Interesting solution from discussions
/*

int main() {
    int hh, mm, ss ;
    char t12[3];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, t12) ;

    if (strcmp(t12,"PM")==0 && hh!=12) hh += 12 ;
    if (strcmp(t12,"AM")==0 && hh==12) hh = 0 ;

    printf("%02d:%02d:%02d", hh, mm, ss) ;
    return 0;
}
*/
