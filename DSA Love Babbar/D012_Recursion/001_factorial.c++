#include<iostream>
using namespace std;

int factorial(int n){

    // Base case 
    if (n==0)
        return 1;

    // Recursive case
    return n * factorial(n-1);      // biggerProblem = n * smallerProblem
}


int main(){

    int n = 5;

    int ans = factorial(n);
    cout << ans << endl;

    return 0;
}