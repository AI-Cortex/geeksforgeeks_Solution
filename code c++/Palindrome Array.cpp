// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Palindrome Array
// Link: https://www.geeksforgeeks.org/problems/perfect-arrays4645/1

class Solution
{
public:
    bool isPerfect(vector<int> &arr)
    {
        int n = arr.size();
        for (int i = 0; i < n / 2; i++)
        {
            if (arr[i] != arr[n - 1 - i])
                return false;
        }
        return true;
    }
};
