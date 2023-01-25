// https://www.hackerrank.com/challenges/c-tutorial-struct/problem?isFullScreen=true
#include <iostream>

using namespace std;

struct Student
{
    int age, standard;
    string first_name, last_name;
};


int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}