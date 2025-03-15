// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Missing number in shuffled array
// Link: https://www.geeksforgeeks.org/problems/missing-number-in-shuffled-array0938/1

class Solution
{
public:
    int findMissing(vector<int> &arr1, vector<int> &arr2)
    {
        int n = 0;
        for (auto num : arr1)
            n ^= num;
        for (auto num : arr2)
            n ^= num;
        return n;
    }
};