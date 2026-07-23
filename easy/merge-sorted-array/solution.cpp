// Merge Sorted Array
// Difficulty: Easy
// https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int x = m+n;

        int z = 0;
        for( int i = m; i < x; i++){
            nums1[i] = nums2[z];
            z++;
        }

        sort(nums1.begin(), nums1.end());
    }
};