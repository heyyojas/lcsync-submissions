// XOR After Range Multiplication Queries I
// Difficulty: Medium
// https://leetcode.com/problems/xor-after-range-multiplication-queries-i/

class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int const long long MOD = 1000000007;
        for(auto &q : queries){
            int idx = q[0];
            while(idx <= q[1]){
                nums[idx] = (1LL * nums[idx] * q[3]) % MOD;
                idx +=q[2];
            }
        }

        int result = 0;
        for(int x: nums){
            result ^= x;
        }
        return result;

    }
};