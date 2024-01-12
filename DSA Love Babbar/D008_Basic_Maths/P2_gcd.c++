#include<iostream>
using namespace std;


int gcd(int a, int b){
    if (a==0) return b;
    if (b==0) return b;

    while (a!=b)
    {
        if (a>b)
        {
            a = a-b;
        }
        else{
            b= b-a;
        }
    }
    return a;    
}

int main(){

    int a=72,b=24;
    cout << gcd(a,b);

     
}