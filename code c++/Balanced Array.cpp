// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Balanced Array
// Link: https://www.geeksforgeeks.org/problems/balanced-array07200720/1

class Solution
{
public:
    int minValueToBalance(vector<int> &arr)
    {
        int a = 0, b = 0;
        for (size_t i = 0; i < arr.size() / 2; i++)
            a += arr[i];
        for (size_t i = arr.size() / 2; i < arr.size(); i++)
            b += arr[i];
        return abs(a - b);
    }
};
