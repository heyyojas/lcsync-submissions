// Sum of Primes Between Number and Its Reverse
// Difficulty: Medium
// https://leetcode.com/problems/sum-of-primes-between-number-and-its-reverse/

class Solution {
public:

    bool isPrime(int n){
        if(n <=1 ) return false;
        if(n == 2) return true;

        if(n % 2 == 0) return false;

        for(int i =3 ; i*i <= n; i+=2){
            if(n%i==0) return false;
        }
        return true;
    }

    int reverse(int n){
        int x = 0;
        while(n>0){
            x = x * 10 + (n%10);
            n = n / 10;
        }
        return x;
    }
    
    int sumOfPrimesInRange(int n) {
        int r = reverse(n);

        int low = min(n, r);
        int high = max(n, r);

        int sum = 0;

        for(int i=low; i<=high; i++){
            if(isPrime(i)){
                sum+=i;
            }
        }
        return sum;
    }
};