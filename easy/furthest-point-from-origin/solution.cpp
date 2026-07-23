// Furthest Point From Origin
// Difficulty: Easy
// https://leetcode.com/problems/furthest-point-from-origin/

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int L=0, R=0, und=0;;
        for(char ch : moves){
            if(ch=='L') L++;
            else if(ch=='R') R++;
            else und++;
        }
        int pos = R-L;
        return abs(pos) + und;
    }
};