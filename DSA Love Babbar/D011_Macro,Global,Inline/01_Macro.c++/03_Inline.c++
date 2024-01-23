#include<iostream>
using namespace std;


inline int getMax(int a, int b){        // inline function
    return (a>b) ? a : b;
}

int main(){

    int a =1, b =2;
    int ans = 0;

    ans = (a>b) ? a : b;        // single line function
    cout << ans << endl;

    ans = getMax(a,b);
    cout << ans << endl;

    return 0;
}