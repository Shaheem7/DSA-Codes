#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while (i<n)             // this loop is for column
    {
        cout<<i;
        i++;
    }
    cout<<endl;
    i = 1;
        
    while (i<n)             // this loop is for rows
    {
        cout<<i<<endl;
        i++;
    }

                    /* Pattern 1
                        1234
                        1234
                        1234
                        1234
                    */
    i = 1;
    while (i<=4)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<j;
            j++;
        }
        i++;
        cout<<endl;
    }


     
}