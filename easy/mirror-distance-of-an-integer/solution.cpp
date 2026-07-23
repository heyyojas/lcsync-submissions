// Mirror Distance of an Integer
// Difficulty: Easy
// https://leetcode.com/problems/mirror-distance-of-an-integer/

class Solution {
public:

    int reverse(int n){
        int original = n;
        int reverse = 0;
        while(original>0){
            reverse = reverse*10 + (original%10);
            original /= 10;
        }
        return reverse;
    }

    int mirrorDistance(int n) {
        int ans = abs(n-reverse(n));
        return ans;
    }
};