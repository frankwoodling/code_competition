// HackerRank Practice
// C++ > Classes > Structs

#include <iostream>
using namespace std;

struct Student{
    int age;
    string first_name[50];
    string last_name[50];
    int standard;
};

int main() {
    Student st;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}