// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Set bits in N
// link : https://www.geeksforgeeks.org/problems/set-bits-in-n--163218/1

class Solution
{
public:
    int setBitCount(int n)
    {
        return __builtin_popcount(n);
    }
};