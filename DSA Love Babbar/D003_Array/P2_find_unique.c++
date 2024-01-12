#include<iostream>
using namespace std;
int main(){

  

    int arr[5]= {1,3,5,3,1};    

    int ans = 0;
    // using XOR --  a^a = 0
    for (int i = 0; i < 5; i++)
    {
        ans = ans^arr[i];

    }
    cout<< ans ;
     
}