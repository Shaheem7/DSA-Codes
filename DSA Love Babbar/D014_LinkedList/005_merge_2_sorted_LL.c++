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

    // ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    //     if(list1 == nullptr) return list2;
    //     if(list2 == nullptr) return list1;
    //     ListNode* dummyNode = new ListNode(-1);
    //     ListNode* temp = dummyNode;
    //     ListNode* t1 = list1;
    //     ListNode* t2 = list2;
    //     while(t1 != NULL && t2 != NULL) {
    //         if(t1->val < t2->val) {
    //             temp->next = t1;
    //             temp = t1;
    //             t1 = t1->next;
    //         } else {
    //             temp->next = t2;
    //             temp = t2;
    //             t2 = t2->next;
    //         }
    //     }
    //     if(t1) temp->next = t1;
    //     else temp->next = t2;
    //     return dummyNode->next;

ListNode* merge2SLL(ListNode* &list1, ListNode* &list2){
    // check the empty condition
    if(list1==nullptr) return list2;
    if(list2==nullptr) return list1;
    
    // dummy node
    ListNode* dummyNode = new ListNode(-1);
    ListNode* temp = dummyNode;
    
    // lists representing pointers
    ListNode* l1 = list1;
    ListNode* l2 = list2;

    while (l1!=NULL && l2!=NULL)
    {
        if (l1->val<l2->val)
        {
            temp->next = l1;
            temp = l1;
            l1 = l1->next;
        }
        else{
            temp->next = l2;
            temp = l2;
            l2 = l2->next;
        }
    }
    if(l1) temp->next = l1;
    else temp->next =l2;
    return dummyNode->next;
    
}

int main(){

    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    print(list1);
    print(list2);

    print(merge2SLL(list1, list2));



    return 0;
}