// HackerRank Practice Problem
// C++ > Classes > Class

#include <iostream>
#include <sstream>
using namespace std;

class Student{
public:
    int age;
    string first_name;
    string last_name;
    int standard;

    void set_age(int a){
        age = a;
    }

    void set_standard(int s){
        standard = s;
    }

    void set_first_name(string name_f){
        first_name = name_f;
    }

    void set_last_name(string name_l){
        last_name = name_l;
    }

    int get_age(){
        return age;
    }

    string get_last_name(){
        return last_name;
    }

    string get_first_name(){
        return first_name;
    }

    int get_standard(){
        return standard;
    }

    string to_string(){
        stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};


int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}