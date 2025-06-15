// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Mean of an Array
// link : https://www.geeksforgeeks.org/problems/mean0021/1

class Solution
{
public:
    int findMean(vector<int> &arr)
    {
        return accumulate(arr.begin(), arr.end(), 0) / arr.size();
    }
};