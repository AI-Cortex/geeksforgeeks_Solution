// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Replace all 0's with 5
// Link: https://www.geeksforgeeks.org/problems/replace-all-0s-with-5/1

class Solution
{
public:
    int convertFive(int n)
    {
        int m = 0, r, z = 1;
        if (n == 0)
            return 5;
        while (n)
        {
            r = n % 10;
            if (r == 0)
                m = m + z * 5;
            else
                m = m + z * r;
            z *= 10;
            n /= 10;
        }
        return m;
    }
};