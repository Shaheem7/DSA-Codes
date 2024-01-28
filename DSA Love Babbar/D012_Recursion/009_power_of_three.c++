#include<iostream>
using namespace std;

bool isPowerOfThree(int n){
    // base case
    if (n==1){
        return true;
    }
    if (n==0){
        return false;
    }
    // recursive case
    if (n % 3 != 0) {
        return false; // If n is not divisible by 3, it's not a power of three
    }
    return isPowerOfThree(n / 3);
    
}

int main(){


    cout << isPowerOfThree(30) << endl;
    return 0;
}
