// Maximum Number of Items From Sale I
// Difficulty: Medium
// https://leetcode.com/problems/maximum-number-of-items-from-sale-i/

class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
       int n = items.size();

        vector<int> val(n,0);

        long long min_price = INT_MAX;

        for(int i=0; i<n; i++){
            min_price = min(min_price ,(long long)items[i][1]);
            for(int j=0; j<n; j++){
                if(i != j && items[j][0] % items[i][0] == 0){
                    val[i]++;
                }
            }
        }
        vector<long long> dp(budget + 1, -1);
        dp[0] = 0;

        for(int i=0; i<n; i++){
            int cost = items[i][1];
            int value = 1 + val[i];

            for(int x = budget; x>=cost; x--){
                if(dp[x-cost] != -1){
                    dp[x] = max(dp[x], dp[x - cost] + value );
                }
            }
        }

        long long max_items =0;

        for(int z = 0; z<=budget; z++){
            if(dp[z] != -1){
                long long remaining = budget - z;

                long long extra = remaining / min_price;
                long long total = dp[z] + extra;

                max_items = max(max_items, total);
            }
        }
        return max_items;
    }
};