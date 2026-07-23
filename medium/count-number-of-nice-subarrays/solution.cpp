// Count Number of Nice Subarrays
// Difficulty: Medium
// https://leetcode.com/problems/count-number-of-nice-subarrays/

class Solution {
public:

    int atMost(vector<int> &nums, int k){
        int count=0;
        int left=0;
        int odd=0;
        for(int right= 0; right<nums.size(); right++){
            if(nums[right]%2==1) odd++;
            while(odd>k){
                if(nums[left] % 2 ==1) odd--;
                left++;
            }
            count += right-left+1;
        }
        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k-1);
    }
};