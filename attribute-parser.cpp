// https://www.hackerrank.com/challenges/attribute-parser/problem?isFullScreen=true

/*
4 3
<tag1 value = "HelloWorld">
<tag2 name = "Name1">
</tag2>
</tag1>
tag1.tag2~name
tag1~name
tag1~value
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, Q, lineChar, line;
    cin>>N>>Q;

    // string arrN[20];
    // string arrQ[20];
    // char code[200];
    char code[200] = {'\0'};
    
    int size;

    vector<vector<string>> vecN(20);
    vector<string> vecQ(20);
    
    for (line=0; line<=N; line++)
    {
        cin.getline(code, 200);
        string codeStr(code);
        size = codeStr.length();

        for ( int i = 0; i < size; i++)
        {
            vecQ.push_back(code[i]);
        }
        
        // cout<<vecN[line];
    }
    for (line=0; line<=N; line++)
    {
        for (int i = 0; i < size; i++)
        {
           cout<< vecN[line][i];
        }
        
        // cout<<vecN[line];
    }

    // for (line=0; line<N; line++)
    // {
    //     for ( lineChar = 0; lineChar < size; lineChar++)
    //     {
    //         cout<<vecN[line][lineChar];
    //     }
    //     cout<<endl;
    // }
    return 0;
}
