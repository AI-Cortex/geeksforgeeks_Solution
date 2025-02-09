// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Count Smaller Than X
// Link: https://www.geeksforgeeks.org/problems/count-smaller-than-x/1

class Solution
{
public:
    int smallerThanX(int arr[], int n, int x)
    {
        int t = 0;
        for (int i = 0; i < n; i++)
            if (arr[i] < x)
                t++;
        return t;
    }
};
