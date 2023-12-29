#include<iostream>
using namespace std;

int factorial(int n){
    if (n==0 || n == 1)
    {
        return 1;
    }
    

    return n * factorial(n-1);
}

int nCr(int n, int r){
    int ans = factorial(n)/(factorial(n-r)*factorial(r));
    return ans;
}

int main(){

    int n;
    int r;
    cin >> n >> r;
    cout<< "Factorial of n is " <<factorial(n) << endl;
    cout<< "nCr = " << nCr(n,r) << endl;
     
}