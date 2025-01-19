// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Minimum Sum of Absolute Differences of Pairs
// Link: https://www.geeksforgeeks.org/problems/minimum-sum-of-absolute-differences-of-pairs/1

class Solution
{
public:
    long long findMinSum(vector<int> &A, vector<int> &B, int N)
    {
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        long long sum = 0;
        for (int i = 0; i < A.size(); i++)
        {
            sum += abs(A[i] - B[i]);
        }
        return sum;
    }
};
