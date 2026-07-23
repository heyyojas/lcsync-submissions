// Smallest Stable Index II
// Difficulty: Medium
// https://leetcode.com/problems/smallest-stable-index-ii/

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> min1(n), max1(n);

        max1[0] = nums[0];
        for(int i=1; i<n; i++){
            max1[i] = max(max1[i-1], nums[i]);
        }

        min1[n-1]=nums[n-1];
        for(int i=n-2; i>=0; i--){
            min1[i] = min(min1[i+1], nums[i]);
        }

        for(int i=0; i<n; i++){
            if(max1[i] - min1[i] <=k){
                return i;
            }
        }
        return -1;
    }
};