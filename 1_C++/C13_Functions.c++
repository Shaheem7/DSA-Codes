#include<iostream>
using namespace std;

int power(int a, int b){

    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
}


int main(){
    int c, d;
    cin>>c >> d ;

    cout << "Power of " <<d << " on "<< c << " is " << power(c,d) << endl;
    cout << c << " powered by " << d << " is " << power(c,d);
     
}