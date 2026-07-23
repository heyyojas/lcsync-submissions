// Compare Sums of Bitonic Parts
// Difficulty: Medium
// https://leetcode.com/problems/compare-sums-of-bitonic-parts/

class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        
        int max = nums[0];
        int x = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > max){
                max = nums[i];
                x=i;
            }
        }
        
        long long int suma=0;
        for(int i=0; i<x; i++){
            suma+=nums[i];
        }

        long long int sumd=0;
        for(int i=x+1; i<nums.size(); i++){
            sumd+=nums[i];
        }

        if(suma == sumd){
            return -1;
        }

        if(suma > sumd){
            return 0;
        }
        return 1;
    }
};