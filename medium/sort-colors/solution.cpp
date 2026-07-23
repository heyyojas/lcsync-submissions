// Sort Colors
// Difficulty: Medium
// https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int temp=0;
        for (int i=0; i<nums.size()-1; i++){
            for(int j =0; j<nums.size()-i-1; j++){
                if(nums[j]>=nums[j+1]){
                    temp = nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
    }
};