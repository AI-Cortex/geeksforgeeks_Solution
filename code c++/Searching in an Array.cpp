// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Searching in an Array
// Link: https://www.geeksforgeeks.org/problems/searching-a-number0324/1

class Solution
{
public:
    int search(int k, vector<int> &arr)
    {
        for (size_t i = 0; i < arr.size(); i++)
            if (arr[i] == k)
                return i + 1;
        return -1;
    }
};