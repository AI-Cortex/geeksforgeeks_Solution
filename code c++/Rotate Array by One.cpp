// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Rotate Array by One
// Link: https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1

#include <vector>

class Solution
{
public:
    void rotate(vector<int> &arr)
    {
        int len = arr.size();
        int t = arr[len - 1];
        arr.erase(arr.begin() + len - 1);
        arr.insert(arr.begin(), t);
    }
};