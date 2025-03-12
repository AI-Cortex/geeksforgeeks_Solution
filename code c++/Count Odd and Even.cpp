// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Count Odd and Even
// Link: https://www.geeksforgeeks.org/problems/count-odd-even/1

class Solution
{
public:
    pair<int, int> countOddEven(vector<int> &arr)
    {
        int even = 0, odd = 0;
        for (auto n : arr)
            (n & 1) ? odd++ : even++;
        return {odd, even};
    }
};
