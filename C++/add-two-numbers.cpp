/**
 * https://leetcode.com/problems/add-two-numbers/
 * Runtime: 20 ms, faster than 87.96% of C++ online submissions for Add Two Numbers.
 * Memory Usage: 10.3 MB, less than 86.29% of C++ online submissions for Add Two Numbers.

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int l1_sum = 0;
        int l2_sum = 0;
        ListNode* head = new ListNode(0);
        ListNode* cur = head;
        int carry = 0;
        while (l1 != NULL | l2 != NULL | carry != 0) {
            int sum = carry;
            carry = 0;
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }
            if (sum >= 10) {
                sum -= 10;
                carry = 1;
            }
            ListNode* newNode = new ListNode(sum);
            cur->next = newNode;
            cur = newNode;
        }
        return head->next;
    }
};
