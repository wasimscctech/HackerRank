// https://www.hackerrank.com/challenges/cpp-lower-bound/problem?isFullScreen=true
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
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

    vector<int>::iterator lower;
    int n, Q[100000], position;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> Q[i];
    }

    for (i = 0; i < n; i++)
    {
        lower = lower_bound(v.begin(), v.end(), Q[i]);
        position = lower - v.begin() + 1;
        if (v[position - 1] == Q[i])
        {
            cout << "Yes " << position << endl;
        }
        else
        {
            cout << "No " << position << endl;
        }
    }

    return EXIT_SUCCESS;
}