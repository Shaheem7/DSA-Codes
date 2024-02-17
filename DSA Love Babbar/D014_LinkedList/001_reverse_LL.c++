#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // constructor
    Node(int da){
        this->data = da;
        this->next = NULL;
    }
};

void print(Node* &head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = temp;
}


Node* reverse_LL(Node* &head){          // returns tail or reversed head
    // using loop

    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    
    Node* prev = NULL;
    Node* curr = head;
    Node* forw = NULL;

    while (curr != NULL)
    {
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }
    return prev;


}

int main(){

    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail,12);
    InsertAtTail(tail,13);
    InsertAtTail(tail,14);
    
    print(head);

    Node* h = reverse_LL(head);

    print(h);

    return 0;
}