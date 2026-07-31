// Maximum Product of Three Numbers
// Difficulty: Easy
// https://leetcode.com/problems/maximum-product-of-three-numbers/

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int ans;
        sort(nums.begin(), nums.end());

        int n = nums.size();

        int opt1 = nums[n-1] * nums[n-2] * nums[n-3];

        int opt2 = nums[0] * nums[1] * nums[n-1];

        int max1 = max(opt1, opt2);

        return max1;
    }
};