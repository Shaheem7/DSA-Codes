#include<iostream>
using namespace std;
int main(){
    /*
         1
        121
       12321
      1234321
     123454321
    12345654321
   1234567654321
  123456787654321
 12345678987654321
12345678910987654321
    
    */
    int n;
    cin>>n;
    int i = 1;
        while (i<=n)
    {
        // spaces 
        int space = n-i;
        while (space)
        {
            cout<<' ';
            space--;
        }

        // first triangle
        int j = 1;
        while (j<=i)
        {
            cout<<j;
            j++;
        }
        // second triangle
        j = 1;
        while (j<=i-1)
        {
            cout<<i-j;

            j++;
        }
        cout<<endl;
        i++;

    }    
     
}