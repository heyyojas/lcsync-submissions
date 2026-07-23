// Minimum Flips to Make Binary String Coherent
// Difficulty: Medium
// https://leetcode.com/problems/minimum-flips-to-make-binary-string-coherent/

class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        int one =0;
        for(char c : s){
            if(c == '1') one++;
        }

        int a_zero = one;
        int a_one = n - one;

        int a_zero_1 = (one > 0) ? (one - 1) : 1;

        int min_flip = min({a_zero , a_one, a_zero_1});

        if(n>=2){
            int ends = 0;
            if(s[0] == '0') ends++;
            if(s[n-1] == '0') ends++;

            int middle = one; 
            if(s[0] == '1') middle--;
            if(s[n-1] == '1') middle--;

            int m_1001 = ends + middle;

            min_flip = min(min_flip, m_1001);
        }
        return min_flip;
    }
};