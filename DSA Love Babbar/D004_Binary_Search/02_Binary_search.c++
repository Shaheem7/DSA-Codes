#include<iostream>
using namespace std;
#include<vector>

int BinarySearch(int arr[], int size, int k){

    int start = 0;
    int end = size - 1;
    int mid = (start+end)/2;

    while (start <= end)
    {
        if (mid == k)
        {
            return mid;
        }
        
        if (mid < k)        // go to right wala part 
        {
            start = mid+1;
        }
        else{               // go to left wala part 
            end = mid -1;
        }
        mid = (start+end)/2;
    }
}


int main(){

    int arr[6] =  {7,5,9,4,3,8};
    int index = BinarySearch(arr, 6, 4);

    cout <<  "Index for element 8 is " << index << endl; 

    return 0;
}