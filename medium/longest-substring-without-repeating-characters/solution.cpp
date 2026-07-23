// Longest Substring Without Repeating Characters
// Difficulty: Medium
// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int left = 0;
        int max1 = 0;
        for(int right=0; right < s.length(); right++){
            while(charSet.find(s[right]) != charSet.end()){
                charSet.erase(s[left]);
                left++;
            }
            charSet.insert(s[right]);
            max1=max(max1, right - left + 1);
        }
        return max1;
    }
};