// Middle of the Linked List
// Difficulty: Easy
// https://leetcode.com/problems/middle-of-the-linked-list/

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
    ListNode* middleNode(ListNode* head) {
        int total=0;
        ListNode *ptr=head;
        while(ptr!=NULL){
            ptr=ptr->next;
            total++;
        }

        int target = total/2;
        target +=1;

        ListNode *ptr1 = head;
        int count = 1;
        while(count < target){
            ptr1 = ptr1->next;
            count++;
        }

        return ptr1;
    }
};