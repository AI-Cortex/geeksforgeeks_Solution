// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Tom and Jerry
// Link: https://www.geeksforgeeks.org/problems/tom-and-jerry1325/1

class Solution
{
public:
    int numsGame(int N)
    {
        return (N & 1) ? 0 : 1;
    }
};