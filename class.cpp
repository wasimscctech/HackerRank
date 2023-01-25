// https://www.hackerrank.com/challenges/c-tutorial-class/problem?isFullScreen=true
#include <iostream>
#include <sstream>
#include <stdlib.h>
using namespace std;

class Student{
    private:
        int age, std;
        string firstName, lastName;
    public:
    string result_str;
    stringstream ss;

    void set_age(int age){
        this->age = age;
    }
    void set_standard(int standard){
        std = standard;
    }
    void set_first_name(string first_name){
        firstName = first_name;
    }

    void set_last_name(string last_name){
        lastName = last_name;
    }

    int get_age(){
        return age;
    }
    string get_first_name(){
        return firstName;
    }
    string get_last_name(){
        return lastName;
    }
    int get_standard(){
        return std;
    }
    string to_string() {
        ss<<age<<","<<firstName<<","<<lastName<<","<<std;
        ss>>result_str;
        return result_str;
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
    
    return EXIT_SUCCESS;
}