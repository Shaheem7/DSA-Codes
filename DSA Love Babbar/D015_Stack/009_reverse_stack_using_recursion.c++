#include<iostream>
using namespace std;

#include<stack>

void insertAtBottom(std::stack<int> &s, int element){
    // base case 
    if(s.empty()){
        s.push(element);
        return;
    }
    int num = s.top();
    s.pop();

    // r case
    insertAtBottom(s, element);
    s.push(num);
}



void reverseStack(stack<int> &stack) {
    // Write your code here

    // base case 
    if(stack.empty()){
        return;
    }
    int num = stack.top();
    stack.pop();

    // re case
    reverseStack(stack);
    insertAtBottom(stack, num);

}

int main(){


    return 0;
}