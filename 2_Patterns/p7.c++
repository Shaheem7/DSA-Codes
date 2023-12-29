#include<iostream>
using namespace std;
int main(){
                                /* Pattern 
                                1
                                21
                                321
                                4321
                        
                    */
        
    int n;
    cin>>n;
    int i = 1;
    while (i<n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<i-j+1;            //  element is important here
            j++;
        }
        cout<<endl;
        i++;
    }

     
}