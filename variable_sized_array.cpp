// https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// n = number of variable arrays, q= queries, ai[] = array sizes, aj[] = variable array elements, qi = variable array at ith index, qjk = variable array element.
int main()
{
    int q, n, aj;
    int ai[100000];
    vector<vector<int>> ajv(100000); //we are declaring the size of the vector to prevent segmentation fault when compiler try to push_back elements at the location which is not accessible by the vector.
    
    int qi, qjk;

    cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
        cin >> ai[i];
        for ( int j = 0; j < ai[i]; j++)
        {
            // cin >> ajv[i][j];
            cin >> aj;
            ajv[i].push_back(aj);
        }
    }

    for (int i = 0; i < q; i++)
    {
        cin >> qi >> qjk;
        cout << ajv[qi][qjk] << endl;
    }
    return 0;
}
