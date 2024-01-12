#include<iostream>
using namespace std;

/*

n&1 --> 1  (if the last bit is 1)
    --> 0  (if the last bit is 0)

*/


bool isOdd(int n){

    if (n&1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n ;
    cin>>n;
    if (isOdd(n))
    {
        cout<< "Number is odd"<<endl;
    }
    else{
        cout<< "Number is even"<<endl;
    }

     
}