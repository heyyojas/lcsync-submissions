// Minimum Absolute Difference Between Two Values
// Difficulty: Easy
// https://leetcode.com/problems/minimum-absolute-difference-between-two-values/

class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int last1 = -1, last2=-1;
        int result =200000;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                last1 = i;
                if(last2!=-1){
                    result = min(result, i-last2);
                }
            }
            else if(nums[i]==2){
                last2 = i;
                if(last1 != -1){
                    result = min(result, i-last1);
                }
            }
        }
        return result == 200000 ? -1 : result;
        }
};