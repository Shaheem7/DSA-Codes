#include<iostream>
using namespace std;
                        //  Pattern /
int main(){
    int n;
    cin>>n;
    int i = 0;

    while (i<n)         // this looop for rows and new line
    {
        int j = 0;
        while (j<i)    // this loop to print the length
        {
            cout<< '*';
            j++;
        }
        cout<<endl;
        i++;
    }
        
    cout<<i<<endl;
    while (i>0)
    {
        int j = 0;
        while (j<i)
        {
            cout<< '*';
            j++;
        }
        cout<<endl;
        i--;
    }
    cout<<i<<endl;
        
     
}