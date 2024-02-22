
// two pointer approach

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


void middle_node_of_LL(Node* &head) {
    Node* slow = head;
    Node* fast = head;

    // Traverse the linked list using two pointers
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // At this point, slow is at the middle node
    cout << slow->data << endl;
}


int main() {
    // Sample usage of the Node class
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    middle_node_of_LL(head);

    return 0;
}