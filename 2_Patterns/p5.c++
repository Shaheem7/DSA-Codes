#include<iostream>
using namespace std;
int main(){


                            /* Pattern 4
                       *
                       **
                       ***
                       ****
                    */
        
    int n;
    cin>>n;
    int i = 1;

    while (i<n)
    {
        int j=0;
        while (j<i)
        {
            cout<<'*';
            j++;
        }
        cout<<endl;
        i++;
    }
    
}     