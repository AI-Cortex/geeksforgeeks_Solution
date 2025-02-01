// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Smallest sum contiguous subarray
// Link: https://www.geeksforgeeks.org/problems/smallest-sum-contiguous-subarray/1

class Solution
{
public:
    int smallestSumSubarray(vector<int> &a)
    {
        int min_ = a[0];
        int m = a[0];
        int len = a.size();
        for (int i = 1; i < len; i++)
        {
            m = min(m + a[i], a[i]);
            min_ = min(min_, m);
        }
        return min_;
    }
};
