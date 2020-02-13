/*
* https://leetcode.com/problems/reverse-linked-list/
* Runtime: 8 ms, faster than 89.13% of C++ online submissions for Reverse Linked List.
* Memory Usage: 9.8 MB, less than 5.34% of C++ online submissions for Reverse Linked List.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
     //iterative way
     ListNode* reverseList(ListNode* head) {
         if (head == NULL || head->next == NULL) {
             return head;
         }
         ListNode* ret = reverseList(head->next);
         head->next->next = head;
         head->next = NULL;
         return ret;
     }
    //recursive way
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr != NULL) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }    
};
