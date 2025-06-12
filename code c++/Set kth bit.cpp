// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Set kth bit
// link : https://www.geeksforgeeks.org/problems/set-kth-bit3724/1

class Solution
{
public:
    int setKthBit(int n, int k)
    {
        int b = (1 << k);
        return (n | b);
    }
};
