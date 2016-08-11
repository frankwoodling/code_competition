// TopCoder Practice
// SRM 145 DIV 2
// 145.10 of 250 points

#include <iostream>
#include <vector>

using namespace std;

class ImageDithering
{
public:
    int count(string dithered, vector <string> screen)
    {
        int rows = screen.size();
        int cols = screen[1].size();
        int total = 0;

        for(int i = 0; i < dithered.size(); i++)
        {
            for(int j = 0; j < rows; j++)
            {
                for(int k = 0; k < cols; k++)
                {
                    if(dithered[i] == screen[j][k])
                    {
                        total++;
                    }
                }
            }
        }

        return total;
    }
};


int main()
{
    ImageDithering ID;
    string a = "BW";
    vector <string> b ={"AAAAAAAA",
                        "ABWBWBWA",
                        "AWBWBWBA",
                        "ABWBWBWA",
                        "AWBWBWBA",
                        "AAAAAAAA"};
    ID.count(a, b);
}
