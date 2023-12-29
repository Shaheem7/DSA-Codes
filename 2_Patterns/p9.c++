#include<iostream>
using namespace std;
int main(){
                                     /* Pattern
                    A B C 
                    A B C 
                    A B C          
                    */
        
    int i,n;
    cin>>n;
    i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            char ch;
            ch = 64+j;
            cout<<ch<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
     
}