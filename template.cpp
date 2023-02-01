#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

template<typename T> //this wont be there in simple class
class AddElements{
    T a;
    public:
    // //         Complex operator+(Complex c){
    //         Complex temp;
    //         temp.a = a+ c.a;
    //         temp.b = b + c.b;
    //         return(temp);
    //     }
    AddElements(T element1){
        a = element1;
    }

    T add(T element2){
        T c = a + element2;
        return c;
    }

    T concatenate(T element2){
        T c = a + element2;
        return c;
    }
};

int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
