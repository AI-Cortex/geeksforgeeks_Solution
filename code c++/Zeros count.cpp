// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Zeros count
// Link: https://www.geeksforgeeks.org/problems/count-the-zeros2550--141153/1

class Solution
{
public:
    int countZeroes(int arr[], int n)
    {
        int low = 0;
        int high = n - 1;
        int mid;
        int index = n;
        while (low <= high)
        {
            mid = (high + low) / 2;
            if (arr[mid] == 0)
            {
                index = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return n - index;
    }
};