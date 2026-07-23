// Find the Length of the Longest Common Prefix
// Difficulty: Medium
// https://leetcode.com/problems/find-the-length-of-the-longest-common-prefix/

class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> prefix;

        for(int x : arr1){
            while(x>0){
                prefix.insert(x);
                x=x/10;
            }
        }
        int ans = 0;

        for(int y : arr2){
            while(y > 0){
                if(prefix.count(y)){
                    ans = max(ans, (int)to_string(y).size());
                    break;
                }
                y/=10;
            }
        }
        return ans;
    }
};