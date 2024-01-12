#include<iostream>
using namespace std;
int main(){

    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    // Transpose along diagonal
    /*
    1 4 7 
    2 5 8
    3 6 9
    */
   for (int row = 0; row < 3; row++)
   {
        for (int col = row; col < 3; col++)
        {
            if (row!=col)
            {
                swap(arr[row][col],swap(arr[col][row]))
            }
            
        }  
   }
   
   
     
}