// Digit Frequency Score
// Difficulty: Easy
// https://leetcode.com/problems/digit-frequency-score/

class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int> freq(10, 0);

        while(n > 0){
            freq[n%10]++;
            n /= 10;
        }

        int score = 0;

        for(int i =0; i<=9; i++){
            score += i*freq[i];
        }

        return score;
    }
};