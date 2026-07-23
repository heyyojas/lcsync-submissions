// Minimum Swaps to Move Zeros to End
// Difficulty: Easy
// https://leetcode.com/problems/minimum-swaps-to-move-zeros-to-end/

class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int zero = 0;

        for(int x : nums){
            if(x == 0) zero++;
        }
        int swaps = 0;
        for(int i=0; i<nums.size() - zero; i++){
            if(nums[i] == 0) swaps++;
        }

        return swaps;
    }
};