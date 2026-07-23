// Minimum Operations to Make Array Non Decreasing
// Difficulty: Medium
// https://leetcode.com/problems/minimum-operations-to-make-array-non-decreasing/

class Solution {
public:
    long long minOperations(vector<int>& nums) {
        long long op=0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] < nums[i-1]){
                op+=(nums[i-1] - nums[i]);
            }
        }
        return op;
    }
};