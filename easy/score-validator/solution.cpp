// Score Validator
// Difficulty: Easy
// https://leetcode.com/problems/score-validator/

class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int counter = 0;
        int score = 0;

        for(string &s : events){
            if(counter == 10) break;

            if(s == "W") counter++;

            else if(s == "WD" || s == "NB"){score+=1;}

            else{
                score+=stoi(s);
            }
        }
        return {score, counter};
    }
};