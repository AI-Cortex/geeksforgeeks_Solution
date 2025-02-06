// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Array Searching
// Link: https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621--133819/1

class Solution
{
public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int n, int x)
    {

        for (int i = 0; i < n; i++)
            if (arr[i] == x)
                return i;
        return -1;
    }
};