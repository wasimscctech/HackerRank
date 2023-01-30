#include <iostream>
#include <stdlib.h>
using namespace std;

class Complex{
        int a, b;
    public:
        void setdata(int x, int y){
            a =x;
            b = y;
        }
        void getdata(){
            cout<<"a: "<<a<<" b: "<<b;
        }

        // Complex add(Complex c){ we can not keep any operator in a function name so to overload an operator we can follow as below line.
        Complex operator+(Complex c){
            Complex temp;
            temp.a = a+ c.a;
            temp.b = b + c.b;
            return(temp);
        }

        
};

int main() {
    Complex c1, c2, c3;
    c1.setdata(2, 3);
    c2.setdata(4, 5);
    // c3 = c1.add(c2); 1st type
    // c3 = c1.operator+(c2); 2nd type
    c3 = c1+c2; //3rd type all the 3 types are similar. 
    // here "+" called for non primitive operands. for primitive operand we have standard "+" operator which does simple addition. 


    return EXIT_SUCCESS;
}