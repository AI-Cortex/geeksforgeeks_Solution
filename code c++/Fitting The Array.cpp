// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Fitting The Array
// Link: https://www.geeksforgeeks.org/problems/fitting-the-array1514/1

class Solution
{
public:
    bool isFit(int arr[], int brr[], int n)
    {
        sort(arr, arr + n);
        sort(brr, brr + n);
        for (int i = 0; i < n; i++)
            if (arr[i] > brr[i])
                return false;
        return true;
    }
};