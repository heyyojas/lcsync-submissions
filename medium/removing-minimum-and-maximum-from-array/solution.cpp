// Removing Minimum and Maximum From Array
// Difficulty: Medium
// https://leetcode.com/problems/removing-minimum-and-maximum-from-array/

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int max1 = nums[0];
        int min_index=0, max_index=0;
        int min1 = nums[0];
        for(int i=0; i<n; i++){
            if(nums[i] > max1){
                max1 = nums[i];
                max_index = i;
            }
        }
        for(int i=0; i<n; i++){
            if(nums[i] < min1){
                min1 = nums[i];
                min_index = i;
            }
        }
        int l = min(min_index, max_index);
        int r = max(min_index, max_index);
        
        return min({r+1, n-l, (l+1) + (n-r)});
    }
};