// Valid Digit Number
// Difficulty: Easy
// https://leetcode.com/problems/valid-digit-number/

class Solution {
public:
    bool validDigit(int n, int x) {
        int first = n;
        while(first>=10) first/=10;
        if(first==x) return false;

        while(n>0){
            if (n%10 == x) return true;
            n/=10;
        }
        return false;
    }
};