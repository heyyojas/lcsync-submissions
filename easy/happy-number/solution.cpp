// Happy Number
// Difficulty: Easy
// https://leetcode.com/problems/happy-number/

class Solution {
public:

    int getsum(int n){
        int sum = 0;

        while(n > 0){
            int digit = n % 10; 
            sum += digit * digit;
            n = n/10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> done;

        while(n!=1 && done.count(n) ==0){
            done.insert(n);

            n = getsum(n);
            
        }   
        return n==1; 
    }
};