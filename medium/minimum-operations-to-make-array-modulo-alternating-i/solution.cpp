// Minimum Operations to Make Array Modulo Alternating I
// Difficulty: Medium
// https://leetcode.com/problems/minimum-operations-to-make-array-modulo-alternating-i/

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = INT_MAX;
        for(int x = 0; x<k; x++){
            for(int y = 0; y<k; y++){
                if(x == y) continue;

                int op = 0;

                for(int i =0; i<nums.size(); i++){
                    int rem = nums[i] % k;
                    int target = (i % 2 == 0) ? x : y;

                    int diff = abs(rem - target);

                    op += min(diff, k - diff);
                }
                ans = min(ans,op);
            }
        }
        return ans;
    }
};