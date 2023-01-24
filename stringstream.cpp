#include <sstream>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string myString;
    cin>>myString;

    stringstream ss(myString);

    vector<int> myNumbers;
    while (ss.good())
    {
        string substr;
        getline(ss, substr, ',');
        myNumbers.push_back(stoi(substr));
    }

    for (int i = 0; i < myNumbers.size(); i++)
    {
        cout << myNumbers[i] << "\n";
    }
}