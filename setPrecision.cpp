#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float f;
    double d;

    cin>>a;
    cin>>b;
    cin>>c;
    cin>>f;
    cin>>d;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<fixed<<setprecision(3)<<f<<endl;
    cout<<fixed<<setprecision(9)<<d<<endl;

    return 0;
}