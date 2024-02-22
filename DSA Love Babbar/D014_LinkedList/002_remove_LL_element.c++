#include<iostream>
using namespace std;


class Node{

    public:
    int data;
    Node* next ;

    // Constructor
    Node(int da){
        this->data = da;
        this->next = NULL;
    }
};


void print(Node* &head){
    Node* temp = head;

    while (temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(Node* &tail, int d){
    Node* tnode = new Node(d);
    tail-> next = tnode;
    tail = tnode;
}

Node* rm_LL_element(Node* &head, int val){
    
    Node* prev = NULL;
    Node* temp = head;

    // while (temp!=NULL)
    // {
    //     if (temp->data == val)
    //     {
    //         prev = temp->next;
    //         temp = temp->next->next;
    //     }
    //     else{
    //         prev = temp;
    //         temp = temp->next;
    //     }
    // }


    return head;
}

int main(){


    Node* node1 = new Node(1);

    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail, 2);
    insertAtTail(tail, 6);
    insertAtTail(tail, 3);
    insertAtTail(tail, 4);
    insertAtTail(tail, 5);
    insertAtTail(tail, 6);

    print(head);

    rm_LL_element(head, 6);
    print(head);
    
    return 0;
}

