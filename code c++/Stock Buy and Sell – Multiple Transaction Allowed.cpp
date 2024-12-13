// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Stock Buy and Sell – Multiple Transaction Allowed
// Link: https://www.geeksforgeeks.org/problems/stock-buy-and-sell2615/1

class Solution {
    public:
        int maximumProfit(vector<int> &prices) {
            int len = prices.size();
            int profit = 0;
            for(int i=1; i<len; i++)
                if(prices[i]>prices[i-1]){
                    profit += prices[i] - prices[i-1];
                }
            return profit;
    }
};
