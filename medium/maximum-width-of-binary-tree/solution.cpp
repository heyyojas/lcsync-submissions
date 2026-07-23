// Maximum Width of Binary Tree
// Difficulty: Medium
// https://leetcode.com/problems/maximum-width-of-binary-tree/

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
    int widthOfBinaryTree(TreeNode* root) {
        int x=0;
        
        if(root == NULL) return 0;

        queue<TreeNode*> q;
        queue<long long> index;
        q.push(root);
        index.push(1);

        while(!q.empty()){
            int n = q.size();
            long long first = index.front();
            long long last = first;


            for(int i=0; i<n; i++){
                TreeNode *node = q.front();
                long long f = index.front() - first;
                q.pop();
                index.pop();

                last = f;

                if(node->left){
                    q.push(node->left);
                    index.push(2*f);
                }
                if(node->right){
                    q.push(node->right);
                    index.push(2*f + 1);
                }
            }
            x = max(x, int(last + 1));
        }
        return x;
    }
};