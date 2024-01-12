#include<iostream>
using namespace std;
int main(){
     
     
    /*    
|D|
|C|D
|B|CD
|A|BCD

*/
    int n;
    cin>>n;
    int i = 1;
    while (i<=n)
    {
        char e = 'A' + n -i;            // will help to decide first column
        int j=1;
        while (j<=i)
        {
            cout<<e; 
            e++;                // incrementing element
            j++;
        }
        cout<<endl;
        i++;
    }

}