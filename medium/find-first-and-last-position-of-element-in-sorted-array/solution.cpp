// Find First and Last Position of Element in Sorted Array
// Difficulty: Medium
// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
int findfirst(vector<int>&nums, int target){
    int low=0, ans=-1;
    int high = nums.size()-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid]==target){
            ans = mid;
            high = mid-1;
        }
        else if(nums[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    return ans;
}

int findlast(vector<int>&nums, int target){
    int ans=-1, low=0;
    int high = nums.size()-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid]==target){
            ans = mid;
            low = mid + 1;
        }
        else if(nums[mid]<target){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    return ans;
}

    vector<int> searchRange(vector<int>& nums, int target){
        return {findfirst(nums, target), findlast(nums, target)};
    }
};
