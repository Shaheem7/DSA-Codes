#include<iostream>
using namespace std;
int main(){


                            /* Pattern 3
                        1
                        22
                        333
                        4444
                    */
        
    int n;
    cin>>n;
    int i = 1;

    while (i<n)
    {
        int j=0;
        while (j<i)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    
     
     
}