// Pow(x, n)
// Difficulty: Medium
// https://leetcode.com/problems/powx-n/

class Solution {
public:
    double myPow(double x, int n) {
         if(n==0 || x==1){
            return 1;
        }

        long long int N = n;
        
        if(n<0){
            N=-N;
            x= 1/x;
        }

        double result = 1;

        while(N>0){
        if(N%2 == 1){
            result *=x;
        }
        x*=x;
        N/=2;
    }
    return result;
    }
};