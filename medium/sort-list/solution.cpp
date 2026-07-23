// Sort List
// Difficulty: Medium
// https://leetcode.com/problems/sort-list/

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
    ListNode* sortList(ListNode* head) {
        vector<int>arr1;
        int count=0;
        ListNode *ptr = head;
        while(ptr!=NULL){
            arr1.push_back(ptr->val);
            ptr=ptr->next;
            count++;
        }
        sort(arr1.begin(), arr1.end());
        ListNode *ptr2 =head;
        for(int i=0; i<count; i++){
            ptr2->val = arr1[i];
            ptr2=ptr2->next;
        }

        return head;
    
    }
};