// Maximum Average Subarray I
// Difficulty: Easy
// https://leetcode.com/problems/maximum-average-subarray-i/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum =0;
        for(int i=0; i<k; i++){
            sum += nums[i];
        }
        double maxsum=sum;
        for(int i=k; i<nums.size(); i++){
            sum += nums[i] - nums[i-k];

            if(sum>maxsum){
                maxsum = sum;
            }
        }
        return maxsum/k;
    }
};