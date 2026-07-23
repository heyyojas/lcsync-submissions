// Minimum Size Subarray Sum
// Difficulty: Medium
// https://leetcode.com/problems/minimum-size-subarray-sum/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int min1 = INT_MAX;
        int sum=0;
        int test = 0;

        for(int right=0; right<nums.size(); right++){
            sum+=nums[right];
            while(sum>=target){
                min1 = min(min1, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        return min1==INT_MAX ? 0 : min1;
    }
};