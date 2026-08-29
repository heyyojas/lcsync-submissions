// Smallest Missing Multiple of K
// Difficulty: Easy
// https://leetcode.com/problems/smallest-missing-multiple-of-k/

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st;

        for(int num:nums){
            if(num % k == 0){
                st.insert(num);
            }
        }

        int multiple = k;

        while(st.count(multiple)){
            multiple+=k;
        }

        return multiple;
    }
};