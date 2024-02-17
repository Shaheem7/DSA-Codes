#include<iostream>
using namespace std;

class Node {

    public :

    int data;
    Node* next;

    // Constructor
    Node(int da) { 
        this -> data = da;
        this -> next = NULL;

    }
};


int main(){

    Node* node1 = new Node(10);         // Node* is a pointer that can store the memory address of a Node object.
    cout << node1 ->data << endl;
    cout << node1 ->next << endl;

    cout << node1 << endl;

    return 0;
}

/*
Node: Node is the name of a class that has been defined earlier in the code.
 It represents a node in a linked list. Each node typically contains some data
  (in this case, an integer) and a pointer to the next node in the list.

*: The asterisk (*) is the pointer operator in C++. It is used to declare 
a pointer variable or to dereference a pointer to access the value it points to.

Node*: When * is used with Node, it forms the data type Node*, 
which represents a pointer to an object of type Node. 
In simpler terms, Node* is a pointer that can store the memory address of a Node object.

In the provided code, Node* node1 declares a pointer variable named node1, 
which is capable of storing the memory address of a Node object. 
It's initialized by dynamically allocating memory for a new Node object using new Node(10), 
and then the address of this newly allocated object is stored in node1.


*/