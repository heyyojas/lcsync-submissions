// Linked List Cycle II
// Difficulty: Medium
// https://leetcode.com/problems/linked-list-cycle-ii/

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
    ListNode *detectCycle(ListNode *head) {
        struct ListNode *p = head;
        struct ListNode *q = head;

        while(q!=NULL && q->next!=NULL){
            p = p->next;
            q=q->next->next;

            if(p==q){
                struct ListNode *first =head;
                while(first!=p){
                    first = first->next;
                    p=p->next;
                }
                return first;
            }
        }
        return NULL;
    }
};