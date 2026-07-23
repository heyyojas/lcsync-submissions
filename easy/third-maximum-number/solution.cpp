// Third Maximum Number
// Difficulty: Easy
// https://leetcode.com/problems/third-maximum-number/

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int result = -1;
        sort(nums.begin(), nums.end());
        vector<int> arr;
        arr.push_back(nums[0]);

        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]){
                arr.push_back(nums[i]);
            }
        }

        if(arr.size()<3){
            return arr.back();
        }
            return arr[arr.size()-3];
    }
};