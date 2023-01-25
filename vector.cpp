// vector<int>v; (creates an empty vector of integers)
// int size=v.size();
// v.push_back(x);(where x is an integer.The size increases by 1 after this.)
// v.pop_back(); (After this the size decreases by 1)
// sort(v.begin(),v.end()); (Will sort all the elements in the vector) to use this include algorithm library

#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int N, x, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    for (i = 0; i < N; i++)
        cout << v[i] << " ";

    return EXIT_SUCCESS;
}