#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
       int x;
       vector<vector<int>> D2vec(3);
       for (int i = 0; i < 3; i++)
       {
              for (int j = 0; j < 3; j++)
              {
                     cin >> x;
                     D2vec[i].push_back(x);
              }
       }
       for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++)
            cout<<D2vec[i][j]<<" ";
        cout<<endl;
    }

       return 0;
}
