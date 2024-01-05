#include<iostream>
#include<vector>
using namespace std;


int main(){

        
        int arr[6] ={15, 225, 12 ,23, 3, 4};
        int n=6;

        for (int i = 0; i < n-1; i++)
        {
                int minIndex = i;
                for (int j = i+1; j < n; j++)
                {
                        if (arr[j]<arr[minIndex])
                        {
                                minIndex = j;
                        }
                                                
                }
                swap(arr[i], arr[minIndex]);                
        }
        
        
}