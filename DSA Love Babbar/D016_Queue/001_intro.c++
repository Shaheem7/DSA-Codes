#include<iostream>
using namespace std;

#include<queue>

int main(){

    queue <int> q ;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    
    cout << q.front() << endl;
    cout << q.back() << endl;

    cout << q.empty() << endl;
    cout << q.size() << endl;
    
    q.pop();
    cout << q.size() << endl;


    return 0;
}