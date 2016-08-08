// HackerRank Practice Problem
// C++ >> Strings > Strings

#include <iostream>
using namespace std;

int main() {
    string str_1, str_2;
    cin >> str_1 >> str_2;

    cout << str_1.size() << " " << str_2.size() << endl;
    cout << str_1 + str_2 << endl;

    char a_temp = str_1[0];
    str_1[0] = str_2[0];
    str_2[0] = a_temp;
    cout << str_1 << " " << str_2;

    return 0;
}
