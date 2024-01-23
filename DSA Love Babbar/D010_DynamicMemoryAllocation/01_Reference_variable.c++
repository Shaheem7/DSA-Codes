#include<iostream>
using namespace std;

int& func(int n){
    int num = n;
    int& a = num;
    return a;
}

int* func2(int n){
    int num = n;
    int* a = &num;
    return a;
}

void update(int n){    // Pass by value (n will be the copy of n of main)
    n++;
}

void update2(int& n){   //  Pass by reference

    n++;
}

int main(){

    int i = 5;
    // Reference variable (both i & j points to memory 5)
    int &j = i;

    j++;
    cout << i << endl;
    cout << j << endl;
    

    update2;
    cout << j << endl;


    int n = 10;








    return 0;
}