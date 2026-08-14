// Length of Last Word
// Difficulty: Easy
// https://leetcode.com/problems/length-of-last-word/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1;

        while(i >= 0 && s[i] == ' '){
            i--;
        }

        int count = 0;

        while(i>= 0 && s[i] != ' '){
            count++;
            i--;
        }

        return count;
    }
};