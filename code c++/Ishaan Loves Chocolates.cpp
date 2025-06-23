// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Ishaan Loves Chocolates
// link : https://www.geeksforgeeks.org/problems/ishaan-loves-chocolates2156/1

class Solution
{
public:
    int chocolates(int n, vector<int> &arr)
    {
        return *min_element(arr.begin(), arr.end());
    }
};
