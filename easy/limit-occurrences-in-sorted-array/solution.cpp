// Limit Occurrences in Sorted Array
// Difficulty: Easy
// https://leetcode.com/problems/limit-occurrences-in-sorted-array/

class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> ans;
        int count = 0;

        int prev = INT_MIN;

        for(int x : nums){
            if(x != prev){
                prev = x;
                count = 1;
                ans.push_back(x);
            }
            else if(count < k){
                ans.push_back(x);
                count++;
            }
        }
        return ans;
    }
};