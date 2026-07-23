// Balance a Binary Search Tree
// Difficulty: Medium
// https://leetcode.com/problems/balance-a-binary-search-tree/

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

    void inOrder(TreeNode *root, vector<int>& arr){
        if(!root) return;
        inOrder(root->left, arr);
        arr.push_back(root->val);
        inOrder(root->right, arr);
    }  

    TreeNode* build(vector<int>& arr, int l, int r){
        if(l>r) return NULL;

        int mid = (l + r)/2;

        TreeNode *root = new TreeNode(arr[mid]);
        root->right = build(arr, mid + 1, r);
        root->left= build(arr, l, mid-1);

        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int> arr;
        inOrder(root,arr);
        return build(arr, 0, arr.size()-1);
    }
};