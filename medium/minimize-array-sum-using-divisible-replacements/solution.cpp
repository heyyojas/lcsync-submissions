// Minimize Array Sum Using Divisible Replacements
// Difficulty: Medium
// https://leetcode.com/problems/minimize-array-sum-using-divisible-replacements/

class Solution {
public:
    long long minArraySum(vector<int>& nums) {
        long long ans = 0;
        unordered_set<int> st(nums.begin(), nums.end());

        for(int x : nums){
            int best = x;
            for(int d = 1; d*d <= x; d++){
                if(x%d == 0){
                    if(st.count(d)){
                        best = min(best, d);
                    }

                    int other = x / d;

                    if(st.count(other)){
                        best = min(best, other);
                    }
                }
            }
            ans+=best;
        }
        return ans;
    }
};