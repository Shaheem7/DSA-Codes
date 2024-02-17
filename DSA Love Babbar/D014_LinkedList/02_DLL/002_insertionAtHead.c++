#include<iostream>
using namespace std;

class Node {

    public:

    int data; 
    Node* next;
    Node* prev;

    Node(int da){
        this-> data = da;
        this-> next = NULL;
        this-> prev = NULL;
    }
};

void InsertAtHead(Node* &head, int data){

    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;

    head = temp;
}

void print(Node* &head){
    Node* temp = head;

    while (temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next; 
    }
    cout << endl;
    
}

int main(){

    Node* node1 = new Node(10);

    Node* head = node1;

    InsertAtHead(head, 12);
    InsertAtHead(head, 12);
    print(head);



    return 0;
}