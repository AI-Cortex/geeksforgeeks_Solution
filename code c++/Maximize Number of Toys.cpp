// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Maximize Number of Toys
// link : https://www.geeksforgeeks.org/problems/maximize-number-of-toys/1

class Solution
{
public:
    // Your code here

    int maxToys(vector<int> &arr, int k)
    {
        sort(arr.begin(), arr.end());
        int t = 0;
        for (auto n : arr)
        {
            if (n > k)
                break;
            k -= n;
            t++;
        }
        return t;
    }
};