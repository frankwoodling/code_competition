// TopCoder Practice
// SRM 144 DIV 2
// 250 points
// received 106.23

#include <iostream>

using namespace std;

class Time
{
    public:
        string whatTime(int sec_init)
        {
            int min, sec, hour;
            hour = sec_init/3600;
            min = (sec_init%3600)/60;
            sec = (sec_init%3600)%60;

            return to_string(hour) + ":" + to_string(min) + ":" + to_string(sec);
        }
};

int main()
{
    Time myTime;
    cout << myTime.whatTime(86399);
    return (0);
}