#include<iostream>
using namespace std;
int main(){
    /*    
ABC
ABC
ABC*/

    int n;
    cin>>n;
    int i = 0;
    while (i<n)
    {
        int j=1;
        while (j<=n)
        {
            char ch = 'A'+j-1;
            cout<<ch;            
            j++;
        }
        cout<<endl;
        i++;
    }    
     
}