#include<iostream>
#include <stack>
using namespace std;




int main(){

    stack <int> s;

    s.push(10);
    s.push(11);
    
    s.pop();

    cout << "top element = " << s.top() << endl;

    if (s.empty())
    {
        cout << "stack is empty " << endl;
    }
    else{
        cout << "stack is not empty " << endl;
    }

    cout << "size = " << s.size();
    
    return 0;
}