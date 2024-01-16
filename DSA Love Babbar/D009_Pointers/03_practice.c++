#include<iostream>
using namespace std;
int main(){


    int num = 5;
    cout << &num<< endl;

    // int p =  &num;        error
    // cout<<p<<endl;

    int *t = &num;
    cout<<t<<endl;
    cout<<*t<<endl;

    (*t)++;
    cout<<*t<<endl;







}