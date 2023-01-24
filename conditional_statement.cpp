#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string Numbers[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (n >= 1 && n <= 9)
        cout << Numbers[n - 1];
    else if (n > 9)
        cout << "Greater than 9";

    return EXIT_SUCCESS;
}