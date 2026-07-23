// Two Sum IV - Input is a BST
// Difficulty: Easy
// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

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
        if(root==NULL) return;
        inOrder(root->left,arr);
        arr.push_back(root->val);
        inOrder(root->right,arr);
    }

    bool findTarget(TreeNode* root, int k) {
        vector<int> arr1;
        inOrder(root, arr1);
        
        int n=arr1.size();

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr1[i] + arr1[j]==k){
                    return true;
                }
            }
        }
        return false;
    }
};