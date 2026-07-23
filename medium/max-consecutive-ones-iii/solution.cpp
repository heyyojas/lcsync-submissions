// Max Consecutive Ones III
// Difficulty: Medium
// https://leetcode.com/problems/max-consecutive-ones-iii/

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int max1 =0;
        int zeros =0;
        for(int right =0; right < nums.size(); right++){
            if(nums[right]==0) zeros++;
            while(zeros>k){
                if(nums[left] == 0) zeros--;
                left++;
            }
            max1 = max(max1, right - left + 1);
        }
        return max1;
    }
};