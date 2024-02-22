#include<iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void print(ListNode* head){
    ListNode* temp = head;

    while (temp != NULL)
    {
        cout << temp ->val << " ";
        temp = temp ->next ;
    }
    cout << endl;
}

int main() {
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(1);
    list1->next->next = new ListNode(2);
    list1->next->next->next = new ListNode(3);
    list1->next->next->next->next = new ListNode(3);

    ListNode* temp = list1;
    ListNode* prev = nullptr;

    while (temp != nullptr) {
        if (prev != nullptr && prev->val == temp->val) {
            // Duplicate found, remove duplicate node
            prev->next = temp->next;
            delete temp;
            temp = prev->next; // Move to next node
        } else {
            prev = temp;
            temp = temp->next;
        }
    }

    print(list1);

    return 0;
}
