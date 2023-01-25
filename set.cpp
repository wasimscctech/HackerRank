// https://www.hackerrank.com/challenges/cpp-sets/problem?isFullScreen=true

/*
set<int>s; 
int length=s.size(); //Gives the size of the set.
s.insert(x);
s.erase(val);

set<int>::iterator itr=s.find(val); //Gives the iterator to the element val if it is found otherwise returns s.end() .
Ex: set<int>::iterator itr=s.find(100); //If 100 is not present then it==s.end().

*/

#include <iostream>
#include <stdlib.h>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    set <int> s;
    int Q, qtype, x, i;
    cin>>Q;
    for (i = 0; i < Q; i++)
    {
        cin>>qtype>>x;
        switch (qtype)
        {
        case 1:
            s.insert(x);
            break;
        case 2:
            s.erase(x);
            break;
        case 3:
            // set<int>::iterator it=s.find(x); both are the way to declare an iterator
            auto it = s.find(x);
            if (it == s.end()) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
            break;
        }
    }
    return EXIT_SUCCESS;
}