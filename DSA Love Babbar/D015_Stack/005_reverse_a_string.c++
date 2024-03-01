#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack <int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    int size = s.size();
    cout << "Size = " << size << endl; 

    cout << "top = " << s.top() << endl;

    for (int i = 0; i < size; i++)
    {
        cout << s.top() << endl;
        s.pop();
    }
    

    stack <char> st;

    st.push('l');
    st.push('o');
    st.push('v');
    st.push('e');
    
    

    return 0;
}