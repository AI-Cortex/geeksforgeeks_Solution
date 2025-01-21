// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Number of 1 Bits
// Link: https://www.geeksforgeeks.org/problems/set-bits0143/1

class Solution
{
public:
    int setBits(int n)
    {
        int t = 0;
        while (n)
        {
            n &= n - 1;
            t++;
        }
        return t;
    }
};
