// Convert Sorted Array to Binary Search Tree
// Difficulty: Easy
// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

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

    TreeNode* solve(vector<int> &nums, int left, int right){
        int mid = (left + right)/2;

        if(left>right) return NULL;

        TreeNode* root = new TreeNode(nums[mid]);
        root->right = solve(nums, mid+1, right);
        root->left = solve(nums, left, mid-1);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root = NULL;
        return solve(nums, 0, nums.size()-1);
    }
};