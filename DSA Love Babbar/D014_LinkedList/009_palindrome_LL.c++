#include<iostream>
using namespace std;

//  Two pointer approach 

struct ListNode{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr){}
    ListNode(int x) : val(x), next(nullptr){}
    ListNode(int x, ListNode* next) : val(x), next(next){}
};

bool check_palindrome(ListNode* &head){

        if (!head || !head->next)
            return true;

        // Step 1: Find the middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half of the linked list
        ListNode* prev = NULL;
        ListNode* current = slow->next;
        while (current) {
            ListNode* temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }

        // Step 3: Compare the first half with the reversed second half
        ListNode* second_half = prev;
        while (second_half) {
            if (head->val != second_half->val)
                return false;
            head = head->next;
            second_half = second_half->next;
        }

        return true;

    
}

int main(){


    return 0;
}