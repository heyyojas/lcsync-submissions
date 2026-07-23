// Password Strength
// Difficulty: Medium
// https://leetcode.com/problems/password-strength/

class Solution {
public:
    int passwordStrength(string password) {
        set<char> done;
        int score = 0;
        
        for(char ch : password){
            if(done.count(ch)) continue;

            done.insert(ch);

            if(ch >= 'a' && ch <='z') score+=1;

            else if(ch >= 'A' && ch <= 'Z') score+=2;

            else if (ch >= '0' && ch <= '9') score+=3;

            else if(ch == '!' || ch == '@' || ch == '#' || ch == '$') score+=5;
        }
        return score;
    }
};