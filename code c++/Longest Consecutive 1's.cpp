// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Longest Consecutive 1's
// Link: https://www.geeksforgeeks.org/problems/longest-consecutive-1s-1587115620/1

class Solution
{
public:
    int maxConsecutiveOnes(int N)
    {
        int t = 0;

        while (N)
        {
            t++;
            N = N & (N >> 1);
        }
        return t;
    }
};
