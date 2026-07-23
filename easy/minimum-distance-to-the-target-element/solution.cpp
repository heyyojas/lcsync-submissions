// Minimum Distance to the Target Element
// Difficulty: Easy
// https://leetcode.com/problems/minimum-distance-to-the-target-element/

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int min1 =INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                min1 = min(min1, abs(i-start));
            }
        }
        return min1;
    }
};