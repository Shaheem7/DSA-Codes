#include<iostream>
#include <vector>
using namespace std;

void printarray(vector<int> arr, int n){
    
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
}

int main(){

    vector <int> ans;
    int zeros = 0, ones = 0, twos = 0;

    int arr[6] = {0,1,2,0,1,2};
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            zeros +=1;
        }
        else if (arr[i]==1)
        {
            ones += 1;
        }
        else{
            twos += 1;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if (i<zeros)
        {
            ans.push_back(0);
        }
        else if (i<zeros+ones)
        {
            ans.push_back(1);
        }
        else{
            ans.push_back(2);
        }
        
    }

    printarray(ans,n);
    


    return 0;
}
