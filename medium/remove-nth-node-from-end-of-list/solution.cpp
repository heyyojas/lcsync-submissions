// Remove Nth Node From End of List
// Difficulty: Medium
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}1
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next == NULL){
            return NULL;
        }
        ListNode *ptr = head;
        int total=0;
        while(ptr!=NULL){
            ptr = ptr->next;
            total++;
        }

        int target = total-n;

        if(target == 0){
            ListNode *temp =head;
            head = temp->next;
            delete temp;
            return head;
        }
        ListNode *p = head;
        ListNode *prev = NULL;
        int count = 0;

        while(count!=target){
            prev = p;
            p = p->next;
            count++;
        }

        prev->next = p->next;
        delete p;

        return head;
    }
};