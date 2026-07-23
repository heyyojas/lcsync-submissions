// Sum of Square Numbers
// Difficulty: Medium
// https://leetcode.com/problems/sum-of-square-numbers/

class Solution {
public:
    bool judgeSquareSum(int c) {
        int long long a = 0;
        int long long b =  sqrt(c);

        while(a <= b){
            long long sum = a*a + b*b;

            if(sum == c ) return true;
            else if(sum < c) a++;
            else b--;
        }
        return false;
    }
};