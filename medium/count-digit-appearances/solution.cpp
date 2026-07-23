// Count Digit Appearances
// Difficulty: Medium
// https://leetcode.com/problems/count-digit-appearances/

class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int result = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0 && digit == 0){
                result++;
            }
            while(nums[i] > 0){
                if(nums[i] % 10 == digit){
                    result++;
                }
                nums[i] = nums[i]/10;
            }
        }
        return result;
    }
};