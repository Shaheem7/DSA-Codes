#include<iostream>
using namespace std;

int climbStairs(int n){     //  n -> distint ways
    // base case 
        if(n<0){
            return 0;
        }
        if (n==0){
            return 1;
        }
        // recursive case 
        int ans = climbStairs(n-1) + climbStairs(n-2);
        
        return ans;
}

int main(){

    int n = 4;
    cout << climbStairs(n) << endl;

    return 0;
}