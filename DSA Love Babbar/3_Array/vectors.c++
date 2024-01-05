#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v;

    for (int i = 0; i < 50; i++)
    {
        v.push_back(i);
    }

    int n = size(v);
    
    for (int i = 0; i < n ; i++)
    {
        cout<<v[i]<<endl;
    }
    
    
    

    return 0;
}