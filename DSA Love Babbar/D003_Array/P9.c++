#include<iostream>
using namespace std;


int main(){

    int arr[6] = {0,1,2,0,1,2};
    int n = 6;

    int left = 0, right = n-1;

    while (left<right)
    {
        while (arr[left]==0 && left<right)
        {
            left++;
        }
        while (arr[right]==1 && left<right)
        {
            right--;
        }
        
        if (arr[right] ==0 && arr[right]==1 && left<right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        
    }
    
    

    return 0;
}