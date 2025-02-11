// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Swap the array elements
// Link: https://www.geeksforgeeks.org/problems/need-some-change/1

class Solution
{
public:
    // Function to swap elements of the array
    void swapElements(vector<int> &arr)
    {
        int len = arr.size();
        for (int i = 0; i < len - 2; i++)
        {
            swap(arr[i], arr[i + 2]);
        }
    }
};