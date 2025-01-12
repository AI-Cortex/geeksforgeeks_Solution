// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Reach a given score
// Link: https://www.geeksforgeeks.org/problems/reach-a-given-score-1587115621/1


class Solution
{
public:
    long long int count(long long int n)
    {
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        for (int score : {3, 5, 10})
        {
            for (int i = score; i <= n; ++i)
            {
                dp[i] += dp[i - score];
            }
        }

        return dp[n];
    }
};