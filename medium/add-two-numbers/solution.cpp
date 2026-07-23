// Add Two Numbers
// Difficulty: Medium
// https://leetcode.com/problems/add-two-numbers/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *first = NULL;
        ListNode *last = NULL;

        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            int val1 = (l1!=NULL) ? l1->val : 0;
            int val2 = (l2!=NULL) ? l2->val : 0;

            int sum = val1 + val2 + carry;
            carry = sum/10;

            ListNode *newNode = new ListNode(sum%10);

            if(first ==NULL){
                first = newNode;
                last = newNode;
            } else {
                last->next = newNode;
                last = newNode;
            }

            if(l1){
                l1 = l1->next;
            }
            if(l2){
                l2=l2->next;
            }
        }
        return first;
    }
};