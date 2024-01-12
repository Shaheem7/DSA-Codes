#include<iostream>
using namespace std;
int main(){

                                /* Pattern 
                        A A A 
                        B B B 
                        C C C                 
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
            ch = 64+i;
            cout<<ch<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}
     
