// Longest Common Prefix
// Difficulty: Easy
// https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string prefix = strs[0];

        for(int i=1; i<strs.size(); i++){
            while(strs[i].find(prefix) != 0){
                prefix.pop_back();

                if(prefix.empty()){
                    return "";
                }
            }
        }
        return prefix;
    }
};