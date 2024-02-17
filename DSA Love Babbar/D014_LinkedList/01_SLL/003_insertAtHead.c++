#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;     // Node* is a pointer that can store the memory address of a Node object.

    // Constructor
    Node(int dat){
        this ->data = dat;
        this ->next = NULL; 
    }
};

void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);       // temp is going to store the memory address of the new object created
    temp ->next = head;
    head = temp;
}

void print(Node* head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp ->data << " ";
        temp = temp ->next ;
    }
    cout << endl;
}

int main(){

    // created first node 
    Node* node1 = new Node(10);

    // pointed head to node1
    Node* head = node1;

    for (int i = 12; i < 52; i=i+5)
    {
        InsertAtHead(head, i);
    }
    
    print(head);
    return 0;
}