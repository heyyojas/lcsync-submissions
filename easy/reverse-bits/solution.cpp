// Reverse Bits
// Difficulty: Easy
// https://leetcode.com/problems/reverse-bits/

class Solution {
public:
    int reverseBits(int n) {
        int rev;
        for(int i=0; i<32; i++){
            rev <<= 1;
            rev |= (n&1);
            n >>= 1;
        }
        return rev;
    }
};