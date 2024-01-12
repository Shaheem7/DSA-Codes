#include<iostream>
using namespace std;

// LEETCODE --- 1281. Subtract the Product and Sum of Digits of an Integer

int main(){

    int n ;
    cin>>n ;

    int sum = 0;
    int prod = 1;
    while(n!=0){
        int digit = n%10;

        prod = prod * digit;
        sum = sum + digit;
        n = n/10;

    }
    int diff = prod - sum;
    cout<< prod << " " << sum;
    

    // cout<< diff;     

     
}
