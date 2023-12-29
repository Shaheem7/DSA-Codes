#include<iostream>
#include<vector>
using namespace std;

int main(){

        int arr1[6] ={1, 2, 2 ,2, 3, 4};
        int arr2[4] = {2,  2, 3 ,3};

        int n=6,m=4;


    // Approach 3

    int i=0,j=0;
    vector<int> ans;

    while (i<n && j<m)
    {
        if (arr1[i]==arr2[j])
        {
            ans.push_back(arr1[i]);
        i++;
        j++;
    }
    else if (arr1[i]<arr2[j])
    {
        i++;
    }
    else{
        j++;
    }
    
}
// return ans;




// Approach 1   (Time complexity issue)

    // int intersection[10] = {0};
    // int k = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {

    //         if (arr[i]<brr[j]){
    //             break;
    //              } 
    //         if (arr[i]==brr[j])
    //         {
    //             intersection[k] = arr[i];
    //             // cout << (arr[i]) << " ";
    //             brr[j] = INT_MIN;
    //             k++;
    //             break;
    //         }
            
    //     }
        
    // }
    

// Approach 2


    
} 


