#include<iostream>
using namespace std;

void printarray(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        cout  << arr[i] << " ";
    }
    

}


int main(){

    int arr[7] = {1,2,3,4,5,6,7} ;

    int k = 3;

    int n = sizeof(arr)/sizeof(int);

    int temp = 0;

    for (int j = 0; j < k+1; j++)
    {
        for (int  i = 0; i < n-1; i++)
        {
            swap(arr[i],arr[i+1]);
        }

        printarray(arr,n) ; 
        cout << endl;
    }    
}




    // void rotate(vector<int>& nums, int k) {
    //     k = k%nums.size();
    //     reverse(nums.begin(), nums.begin()+ (nums.size()-k));
    //     reverse(nums.begin()+(nums.size()-k), nums.end());
    //     reverse(nums.begin(),nums.end());
    // }







