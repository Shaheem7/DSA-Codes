#include<iostream>
using namespace std;
                        /* Pattern 2
                        123
                        456
                        789
                        
                        
                        
                    */
        
int main(){

    int n;
    cin>>n;
    
    int i = 1;          //row
    int e = 1;          // element
    while (i<n)
    {
        int j=1;        //col
        while (j<n)
        {
            cout<<e<<" ";
            e++;
            j++;
        }
        cout<<endl;
        i++;
    }

///////////////////////////////////////////////////////////////////

//     int n;
//     cin>>n;
    
//     int row = 1;
//     int elem = 1;
//     while (row<n)
//     {
//         int col=1;
//         while (col<n)
//         {
//             cout<<elem<<" ";
//             elem++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
    
}



///////////////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;
// int main()
// {
//     int r=1, e=1;

//     while (r<4)                 // row
//     {
//         int c=1;
//         while (c<4)             // column 
//         {
//             cout<<e<<" ";            // element
//             e++;
//             c++;
//         }
//         r++;
//         cout << "\n";

        
//     }
    
//     return 0;
// }

