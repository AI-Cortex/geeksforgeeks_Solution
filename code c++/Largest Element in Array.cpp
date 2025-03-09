// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Largest Element in Array
// Link: https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1

class Solution
{
public:
    int largest(vector<int> &arr)
    {
        int m = arr[0];
        for (auto n : arr)
        {
            m = max(m, n);
        }
        return m;
    }
};