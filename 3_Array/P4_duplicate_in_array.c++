#include<iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int ans = 0;

    for(int i=0; i<arr.size(); i++){
        ans = ans^arr[i];
    }
	for(int i=0; i<arr.size(); i++){
        ans = ans^i;
    }
    return ans;
}


int main(){

    // vector<int> &arr = {6, 3, 1, 5, 4, 3, 2};
    // findDuplicate(arr);
}