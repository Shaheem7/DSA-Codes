#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    // constructor
    Node(int da) {
        this->data = da;
        this->next = NULL;
    }

    // method to calculate the length of the linked list
    int length(Node* &head) {
        Node* temp = head;
        int cnt = 0;

        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }

    // method to print the second half of the linked list
    void middle_half_of_LL(Node* &head) {
        int cnt = length(head);
        int mid = cnt / 2;
        int position = 0;

        Node* temp = head;

        while (temp != NULL && position < mid) {
            temp = temp->next;
            position++;
        }

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    // Sample usage of the Node class
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Calling the middle_half_of_LL method
    head->middle_half_of_LL(head);

    

    return 0;
}
