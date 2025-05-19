// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Bit Difference
// link : https://www.geeksforgeeks.org/problems/bit-difference-1587115620/1

class Solution
{
public:
    int countBitsFlip(int a, int b)
    {
        a ^= b;
        int t = 0;
        while (a)
        {
            a &= (a - 1);
            t++;
        }
        return t;
    }
};
