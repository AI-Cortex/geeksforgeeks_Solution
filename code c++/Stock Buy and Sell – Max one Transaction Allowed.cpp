// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Stock Buy and Sell – Max one Transaction Allowed
// Link: https://www.geeksforgeeks.org/problems/buy-stock-2/0

class Solution
{
public:
    int maximumProfit(vector<int> &prices)
    {
        int max_ = prices[0];
        int min_ = prices[0];
        int len = prices.size();
        int profit = 0;
        for (int i = 1; i < len; i++)
        {
            if (prices[i] > max_)
                max_ = prices[i];
            else if (min_ > prices[i])
            {
                profit = max(max_ - min_, profit);
                max_ = min_ = prices[i];
            }
        }
        profit = max(max_ - min_, profit);
        return profit;
    }
};