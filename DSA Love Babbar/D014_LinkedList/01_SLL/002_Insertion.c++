#include<iostream>
using namespace std;

class Node{

    public:

    int data;
    Node* next;

    Node(int da) {
        this ->data = da;
        this ->next = NULL;
    }

};

void InsertAtHead(Node* &head, int d){
    // new node
    Node* temp = new Node(d);
    temp ->next = head;
    head = temp;
}

void print(Node* &head){
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
    cout << node1 ->data << endl;
    cout << node1 ->next << endl;
    
    cout << "Node - " << node1 << endl;

    // pointed head to node1
    Node* head = node1;
    cout << "Head - " <<head << endl;

    print(head);

    InsertAtHead(head, 12);
    print(head);

    InsertAtHead(head, 17);
    print(head);

    InsertAtHead(head, 19);
    print(head);


    for (int  i = 11; i < 100; i=i+10)
    {
        InsertAtHead(head, i);
    }
    print(head);

    return 0;
}