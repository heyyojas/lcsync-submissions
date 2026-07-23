// Separate the Digits in an Array
// Difficulty: Easy
// https://leetcode.com/problems/separate-the-digits-in-an-array/

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            vector<int> temp;
            while(nums[i] > 0){
                temp.push_back(nums[i] % 10);
                nums[i] /= 10;
            }
            reverse(temp.begin(), temp.end());

            for(int x : temp){
                result.push_back(x);
            }
        } 
        return result;
    }
};