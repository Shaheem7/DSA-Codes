#include<iostream>
using namespace std;
#include<stack>
#include<queue>

class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        stack<int> s;
        
        while (!q.empty()){
            s.push(q.front());
            q.pop();
        }
        while (!s.empty())
        {
            q.push(s.top());
            s.pop();
        }
        
    }
};


int main(){


    return 0;
}