// Insert into a Binary Search Tree
// Difficulty: Medium
// https://leetcode.com/problems/insert-into-a-binary-search-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *prev = NULL;
        TreeNode *ptr = root;
        while(ptr!=NULL){
            prev = ptr;
            if(val == ptr->val){
                return root;
            }
            else if(ptr->val < val) ptr=ptr->right;
            else ptr=ptr->left;
        }

            TreeNode *newNode = new TreeNode(val);

            if(prev==NULL) return newNode;
            if(prev->val > val) prev->left = newNode;
            else prev->right = newNode;
            return root;
    }
};