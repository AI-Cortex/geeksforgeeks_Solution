// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Max Min
// Link: https://www.geeksforgeeks.org/problems/max-min/1

class Solution
{
public:
    int findSum(int A[], int N)
    {
        int min_ = A[0], max_ = A[0];
        for (int i = 1; i < N; i++)
        {
            min_ = min(min_, A[i]);
            max_ = max(max_, A[i]);
        }
        return max_ + min_;
    }
};