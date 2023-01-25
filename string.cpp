// https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true
#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
    cin>>a;
    cin>>b;
    int lenA= a.length();
    int lenB= b.length();
    
    cout<<lenA<<" "<<lenB<<endl;
    cout<<a+b<<endl;
    cout<<b.substr(0,1)+a.substr(1,lenA)<<" "<<a.substr(0,1)+b.substr(1,lenB);

    return 0;
}