// Sum of Distances
// Difficulty: Medium
// https://leetcode.com/problems/sum-of-distances/

class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n=nums.size();
        vector<long long> ans(n,0);

        unordered_map<int, long long> count,sum;

        for(int i=0; i<n; i++){
            int val = nums[i];
            ans[i] += count[val]*i - sum[val];
            count[val]++;
            sum[val] +=i;
        }

        count.clear();
        sum.clear();

        for(int i=n-1; i>=0; i--){
            int val = nums[i];
            ans[i] += sum[val] - count[val]*i;
            count[val]++;
            sum[val]+=i;
        }
        
        return ans;
    }
};