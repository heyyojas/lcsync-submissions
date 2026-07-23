// Minimum Cost to Move Between Indices
// Difficulty: Medium
// https://leetcode.com/problems/minimum-cost-to-move-between-indices/

class Solution {
public:
    vector<int> minCost(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        int n = nums.size();

        vector<int> closest(n);
        for(int i=0; i<n; i++){
            if(i==0){
                closest[i] = 1;
            }else if(i == n-1){
                closest[i] = n-2;
            }else{
                int left = nums[i]-nums[i-1];
                int right = nums[i+1]-nums[i];

                if(left <= right){
                    closest[i] = i-1;
                }else{
                    closest[i] = i+1;
                }
            }
        }

        vector<int> pre(n,0);
        for(int i=1; i<n; i++){
            if(closest[i-1] == i){
                pre[i] = pre[i-1]+1;
            }else{
                pre[i] = pre[i-1] + (nums[i]-nums[i-1]);
            }
        }

        vector<int> suf(n,0);
        for(int i=n-2; i>=0; i--){
            if(closest[i+1] == i){
                suf[i] = suf[i+1] + 1;
            }else{
                suf[i] = suf[i+1] + (nums[i+1] - nums[i]);
            }
        }

        for(auto &x: queries){
            int left = x[0]; 
            int right = x[1];

            if(left<right){
                ans.push_back(pre[right] - pre[left]);
            }else{
                ans.push_back(suf[right] - suf[left]);
            }
        }
        return ans;
    }
};