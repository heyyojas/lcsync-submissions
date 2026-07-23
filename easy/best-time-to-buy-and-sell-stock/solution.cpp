// Best Time to Buy and Sell Stock
// Difficulty: Easy
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=prices[0];
        int maxprofit=0;
        for(int i=0; i<prices.size(); i++){
            if(minprice>prices[i]){
                minprice=prices[i];
            }
            else{
                maxprofit = maxprofit > (prices[i] - minprice) ? maxprofit : prices[i] - minprice;
            }
        }
        return maxprofit;
    }
};