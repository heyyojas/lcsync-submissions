// Palindrome Linked List
// Difficulty: Easy
// https://leetcode.com/problems/palindrome-linked-list/

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
    bool isPalindrome(ListNode* head) {
        ListNode *ptr = head;
        int total = 0;
        while (ptr != NULL) {
            ptr = ptr->next;
            total++;
        }

        vector<int>arr;
        ListNode *ptr1 = head;
        while(ptr1!=NULL){
            arr.push_back(ptr1->val);
            ptr1 = ptr1->next;
        }

        for(int i=0; i<total/2; i++){
            if(arr[i]!=arr[total - i - 1]){
                return false;
            }
        }
        return true;
    }
};