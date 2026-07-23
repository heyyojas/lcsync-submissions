// Permutation in String
// Difficulty: Medium
// https://leetcode.com/problems/permutation-in-string/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len1 = s1.length();
        int len2 = s2.length();

        if(len1 > len2) return false;

        vector<int> s1count(26,0);
        vector<int> s2count(26, 0);

        for(int i=0; i < len1; i++){
            s1count[s1[i] - 'a']++;
            s2count[s2[i] - 'a']++;
        }

        for(int i=0; i < len2 - len1; i++){
            if(s1count == s2count) return true;

            s2count[s2[i + len1] - 'a']++;

            s2count[s2[i] - 'a']--;
        }

        return s1count == s2count;
    }
};