// Minimum Operations to Transform Array into Alternating Prime
// Difficulty: Medium
// https://leetcode.com/problems/minimum-operations-to-transform-array-into-alternating-prime/

class Solution {
public:

    int isPrime(int x){
        if(x<2) return 0;

        for(int i=2; i*i<=x; i++){
            if(x % i == 0) return false;
        }
        return true;
    }
    
    int minOperations(vector<int>& nums) {
        int operation = 0;
        for(int i=0; i<nums.size(); i++){
            int y = nums[i];
            if (i % 2 == 0){
                while(!isPrime(y)){
                    y++;
                    operation++;
                }
            }
            else{
                while(isPrime(y)){
                    y++;
                    operation++;
                }
            }
        }
        return operation;
    }
};