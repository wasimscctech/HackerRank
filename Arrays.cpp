// https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true
#include <iostream>
#include <stdlib.h>
using namespace std;


int main() {
    int N;
    cin>>N;
    int arr[1000];
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    for(int i=N-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    return EXIT_SUCCESS;
}
