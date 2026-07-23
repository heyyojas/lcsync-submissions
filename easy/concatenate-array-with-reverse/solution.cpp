// Concatenate Array With Reverse
// Difficulty: Easy
// https://leetcode.com/problems/concatenate-array-with-reverse/

class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> result;
        for(int i=0; i< nums.size(); i++){
            result.push_back(nums[i]);
        }

        for(int i=nums.size(); i<2*nums.size(); i++){
            result.push_back(nums[2*nums.size()-i-1]);
        }
        return result;
    }
};