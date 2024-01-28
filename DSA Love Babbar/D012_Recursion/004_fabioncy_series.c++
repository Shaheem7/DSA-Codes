#include<iostream>
using namespace std;

int fabioncy(int n){

    // Base case
    if (n==0 || n==1)
        return n;
    
    // Recursive case
    return fabioncy(n-1) + fabioncy(n-2);
}


int main(){

    int n = 9;
    cout << fabioncy(n) << endl;
    return 0;
}