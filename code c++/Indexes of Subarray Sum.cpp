// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Indexes of Subarray Sum
// link : https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

class Solution
{
public:
    vector<int> subarraySum(vector<int> &arr, int target)
    {
        size_t a = 0, b = 0;
        int sum = 0;
        for (; b < arr.size(); b++)
        {
            sum += arr[b];
            if (sum == target)
                return {a + 1, b + 1};

            else if (sum > target)
            {
                sum -= arr[a++] + arr[b];
                b--;
            }
        }
        return {-1};
    }
};