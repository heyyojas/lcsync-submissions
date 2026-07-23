// Kth Smallest Element in a BST
// Difficulty: Medium
// https://leetcode.com/problems/kth-smallest-element-in-a-bst/

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

    void inOrder(TreeNode *root ,vector<int>& arr){
        if(root==NULL) return;

        if(root->left) inOrder(root->left, arr);
        arr.push_back(root->val);
        if(root->right) inOrder(root->right, arr);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> nums;
        inOrder(root,nums);
        return nums[k-1];
    }
};