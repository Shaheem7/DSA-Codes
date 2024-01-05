#include <iostream>
using namespace std;
int main()
{
    int r=1, e=1;

    while (r<4)                 // row
    {
        int c=1;
        while (c<4)             // column 
        {
            cout<<e<<" ";            // element
            e++;
            c++;
        }
        r++;
        cout << "\n";

        
    }
    
    return 0;
}