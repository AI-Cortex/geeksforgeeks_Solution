// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Check if array contains duplicates
// Link: https://www.geeksforgeeks.org/problems/check-if-array-contains-duplicates/1

class Solution
{
public:
    bool checkDuplicates(vector<int> &arr)
    {
        set<int> s;
        for (auto n : arr)
            s.insert(n);
        return !(arr.size() == s.size());
    }
};
