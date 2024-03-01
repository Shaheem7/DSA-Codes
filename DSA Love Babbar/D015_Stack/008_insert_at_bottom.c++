#include<iostream>
using namespace std;

#include<stack>

stack<int> pushAtBottom(stack<int>& myStack, int x){
    if (myStack.empty())
    {
        myStack.push(x);
        return;
    }
    int num = myStack.top();
    myStack.pop();

    // re case 
    pushAtBottom(myStack,x);
    myStack.push(num);

}


int main(){


    return 0;
}