#include<iostream>
using namespace std;

float mean(int n){
    // base case
    if (n==0){
        return 0;
    }
    // recursive case
    cout << "n: " << n << endl;
    cout << "mean(n-1): " << mean(n-1) << endl;
    float ans = (mean(n-1)*(n-1) + n)/n;
    return ans;
}

int main(){

    
    cout << "Mean of the numbers from 1 to 5 is: "<< mean(5) << endl;

    return 0;
}