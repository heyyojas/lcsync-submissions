// Diameter of Binary Tree
// Difficulty: Easy
// https://leetcode.com/problems/diameter-of-binary-tree/

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

    int MaxDiameter = 0;

    int height(TreeNode *root){
        if(root==NULL) return 0;

        int left = height(root->left);
        int right = height(root->right);

        if(left + right > MaxDiameter) MaxDiameter = left + right;

        return (left > right ? left : right) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        MaxDiameter = 0;
        height(root);
        return MaxDiameter;
    }
};