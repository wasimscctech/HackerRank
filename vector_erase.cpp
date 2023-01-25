// https://www.hackerrank.com/challenges/vector-erase/problem?isFullScreen=true

/* Removes the element present at position.  
Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)

Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)
*/

#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int N, x, i;
    cin>>N;
    for (i = 0; i < N; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    
    int queryA, queryB1, queryB2;
    cin>>queryA;
    v.erase(v.begin()+(queryA-1));
    
    cin>>queryB1>>queryB2;
    v.erase(v.begin()+(queryB1-1),v.begin()+(queryB2-1));

    int size = v.size();
    cout<<size<<endl;
    for (i = 0; i < size; i++)
        cout << v[i] << " ";

    return EXIT_SUCCESS;
}