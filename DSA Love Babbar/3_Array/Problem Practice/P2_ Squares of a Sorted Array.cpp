#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){


    int nums[5] = {-4,-1,0,3,10};

    int n = sizeof(nums)/sizeof(int);

    vector<int> arr;
    for (int i=0;i<n;i++){
        arr.push_back(nums[i]*nums[i]);
    }

    // sort the vector
    

    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
     
}