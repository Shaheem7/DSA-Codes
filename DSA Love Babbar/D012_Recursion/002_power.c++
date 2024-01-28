#include<iostream>
using namespace std;

int power(int n, int p){

    // Base case 
    if (p==0)
        return 1;

    // Recursive case
    return n * power(n,p-1);      // f(n) = n * f(n-1)
}


int main(){


    return 0;
}