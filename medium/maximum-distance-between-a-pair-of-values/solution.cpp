// Maximum Distance Between a Pair of Values
// Difficulty: Medium
// https://leetcode.com/problems/maximum-distance-between-a-pair-of-values/

class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int max1 = 0;
        int i=0;
        for(int j=0; j<nums2.size();j++){
                while(i<nums1.size() && i<=j && nums1[i] > nums2[j]){
                    i++;
                }
                if(i<nums1.size() && i<=j){
                    max1 = max(max1, j-i);
                }
            }
        return max1;
    }
};