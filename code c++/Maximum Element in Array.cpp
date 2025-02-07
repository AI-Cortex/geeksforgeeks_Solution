// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Maximum Element in Array
// Link: https://www.geeksforgeeks.org/problems/largest-element-in-array4009--142158/1

class Solution
{
public:
    int largest(int arr[], int n)
    {
        int mx = arr[0];
        for (int i = 1; i < n; i++)
            mx = max(arr[i], mx);
        return mx;
    }
};