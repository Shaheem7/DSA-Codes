#include<iostream>
using namespace std;

void printarray(int arr[], int n){          // Print 

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printcharray(char arr[], int n){         // Print 

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reversearray(int arr[], int n){         // Reverse
    int start = 0;
    int end = n - 1;

    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    printarray(arr,n);
}

int getMax(int arr[], int n){               // max

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        // maxi = max(maxi,arr[i]);
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout << max << endl;
    return 0;

}

int getMin(int arr[], int n){               // min

    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // mini = min(mini,arr[i]);
        if (arr[i]<min)
        {
            min = arr[i];
        }
    }
    cout << min << endl;
    return 0;

}

int sum(int arr[], int n){              // sum

    int sum = 0; 
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    
    cout << sum << endl;
    return 0;
}

void unique(int arr[], int n){

    
}


int main(){

    int arr[10] = {1,5,6,87,4,3,91,9};
    printarray(arr, 10);

    reversearray(arr, 8);

    cout << sizeof(arr) << endl;

    char ch[5] = {'a','s','d','t','g'};

    printcharray(ch,5);

    getMax(arr,8);
    
    getMin(arr,8);

    sum(arr,8);



    return 0;
}

///  We can use 'VECTORS' as a 'Dynamic Array'