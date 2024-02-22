#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
    
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

int main(){

    ListNode* list1 = new ListNode(4);
    list1->next = new ListNode(1);
    list1->next->next = new ListNode(8);
    list1->next->next->next = new ListNode(4);
    list1->next->next->next->next = new ListNode(5);

    ListNode* list2 = new ListNode(5);
    list2->next = new ListNode(6);
    list2->next->next = new ListNode(1);
    list2->next->next->next = new ListNode(8);
    list2->next->next->next->next = new ListNode(4);
    list2->next->next->next->next->next = new ListNode(5);

    
    print(list1);
    print(list2);

    return 0;
}