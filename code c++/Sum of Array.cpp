// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Sum of Array
// Link: https://www.geeksforgeeks.org/problems/sum-of-array2326/1

class Solution
{
public:
    int arraySum(vector<int> &arr)
    {
        int sum = 0;
        for (const auto &n : arr)
            sum += n;
        return sum;
    }
};
