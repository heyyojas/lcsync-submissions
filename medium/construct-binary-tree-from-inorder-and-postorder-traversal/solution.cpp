// Construct Binary Tree from Inorder and Postorder Traversal
// Difficulty: Medium
// https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/

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
    unordered_map<int, int> inorderIndex;
    int post_index;

    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int left, int right){
        if(left > right) return NULL;

        int rootVal = postorder[post_index--];
        TreeNode *root = new TreeNode(rootVal);

        int index = inorderIndex[rootVal];

        root->right = build(inorder, postorder, index +1, right);
        root->left = build(inorder, postorder, left, index-1);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        post_index = n-1;
        
        for(int i=0; i<n; i++){
            inorderIndex[inorder[i]] = i;
        }
        return build(inorder, postorder, 0 , n-1);
    }
};