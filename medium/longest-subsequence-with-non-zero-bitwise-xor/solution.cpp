// Longest Subsequence With Non-Zero Bitwise XOR
// Difficulty: Medium
// https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr = 0;
        bool nonzero = false;

        for(int num: nums){
            xr ^= num;

            if(num!=0){
                nonzero = true;
            }
        }

        if (!nonzero){
            return 0;
        }

        if (xr != 0){
            return nums.size();
        }

        return nums.size()-1;
    }
};