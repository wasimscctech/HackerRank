/*
https://www.hackerrank.com/challenges/cpp-maps/problem?isFullScreen=true

std::map <key_type, data_type>

Declaration:
map<string,int>m; //Creates a map m where key_type is of type string and data_type is of type int.

Size:
int length=m.size(); //Gives the size of the map.

Insert:
m.insert(make_pair("hello",9)); //Here the pair is inserted into the map where the key is "hello" and the value associated with it is 9.

Erasing an element:
m.erase(val); //Erases the pair from the map where the key_type is val.

Finding an element:
map<string,int>::iterator itr=m.find(val); //Gives the iterator to the element val if it is found otherwise returns m.end() .
Ex: map<string,int>::iterator itr=m.find("Maps"); //If Maps is not present as the key value then itr==m.end().
Accessing the value stored in the key:

To get the value stored of the key: "MAPS" we can do m["MAPS"] or we can get the iterator using the find function and then by itr->second we can access the value.
*/

#include <iostream>
#include <stdlib.h>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    map<string, int> m;
    map<string, int>::iterator it1;

    int Q, qtype, y, i;
    string x;
    cin >> Q;

    for (i = 0; i < Q; i++)
    {
        cin >> qtype >> x;
        switch (qtype)
        {
        case 1:
            it1 = m.find(x);
            cin >> y;
            if (it1 != m.end())
                m[x] += y;
            else
                m.insert(make_pair(x, y));
            break;
        case 2:
            m.erase(x);
            break;
        case 3:
            auto it2 = m.find(x);
            if (it2 == m.end())
                cout << 0 << endl;
            else
                cout << m[x] << endl;
            break;
        }
    }
    return EXIT_SUCCESS;
}
