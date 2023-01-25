// https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true
#include <iostream>

void update(int *a,int *b) {
    int temp;
    temp = *a + *b;
    *b = abs(*a - *b);
    *a = temp;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}