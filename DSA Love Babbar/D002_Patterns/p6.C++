#include<iostream>
using namespace std;
int main(){


                            /* Pattern 2
                        1
                        23
                        345
                        4567
                        
                    */
        
    int n;
    cin>>n;
    int i = 1;
    while (i<n)
    {
        int j=1;
        while (j<i+1)
        {
            cout<<i+j-1;            //  element is important here
            j++;
        }
        cout<<endl;
        i++;
    }
    
     
     
}