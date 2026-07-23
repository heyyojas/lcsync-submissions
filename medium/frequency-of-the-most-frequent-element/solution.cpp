// Frequency of the Most Frequent Element
// Difficulty: Medium
// https://leetcode.com/problems/frequency-of-the-most-frequent-element/

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long long sum = 0;
        int left = 0;
        int max1 = 0;

        sort(nums.begin(), nums.end());
        
        for(int right=0; right<nums.size(); right++){
            sum+=nums[right];

            while((long long)nums[right]* (right-left + 1) - sum > k){
                sum-=nums[left];
                left++;
            }
            max1=max(max1, right - left + 1);
        }
        return max1;
    }
};