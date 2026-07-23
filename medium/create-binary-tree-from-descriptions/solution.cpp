// Create Binary Tree From Descriptions
// Difficulty: Medium
// https://leetcode.com/problems/create-binary-tree-from-descriptions/

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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode *> mp;
        unordered_set<int> child;

        for(auto &x : descriptions){
            int parent = x[0];
            int ch = x[1];
            int isLeft = x[2];

            if(mp.find(parent) == mp.end()){    
                mp[parent] = new TreeNode(parent);
            }

            if(mp.find(ch) == mp.end()){
                mp[ch] = new TreeNode(ch);
            }

            if(isLeft){
                mp[parent]->left = mp[ch];
            }else{
                mp[parent]->right = mp[ch];
            }


            child.insert(ch);
        }

        for(auto &[val, node] : mp){
            if(child.find(val) == child.end()){
                return node;
            }
        }

        return NULL;
    }
};