// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Elements Less Than K
// link : https://www.geeksforgeeks.org/problems/elements-less-than-k/1

class Solution
{
public:
    vector<int> list_less_than_k(vector<int> &arr, int k)
    {
        vector<int> v;
        v.reserve(arr.size());
        for (auto n : arr)
            if (n < k)
                v.push_back(n);
        return v;
    }
};