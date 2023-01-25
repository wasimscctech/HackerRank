// https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true
#include <iostream>
#include <stdlib.h>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
                return a;
            else
                return d;
        }
        else return c;
    }
    else if (b > c)
    {
        if (b > d)
            return b;
        else
            return d;
    }
    else if (c > d)
        return c;
    return d;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return EXIT_SUCCESS;
}