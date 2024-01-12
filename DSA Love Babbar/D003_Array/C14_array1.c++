#include<iostream>
using namespace std;

int getMax(int arr[], int s){

    int maxi = INT_MIN;

    for (int i = 0; i < s; i++)
    {
        // Buildin function 

         maxi = max(maxi, arr[i]);

        // if (arr[i]>max)
        // {
        //     max = arr[i];
        // }
        
    }
    
    return maxi;
}


int getMin(int arr[], int s){

    int mini = INT_MAX;

    for (int i = 0; i < s; i++)
    {

        mini = min(mini, arr[i]);
        // if (arr[i]<min)
        // {
        //     min = arr[i];
        // }
        
    }
    
    return mini;
}



int main(){

    int size ;
    cin >> size;

    int arr[100];

// Taking values 

    for (int i = 0; i < size; i++)
    {
        cout<< "Enter " << i << " = "<< endl ;
        cin>>arr[i];
    }


    cout << "Maximum = " <<  getMax(arr,size) << endl;
    cout << "Minimum = " <<  getMin(arr,size) << endl;
    



     
}