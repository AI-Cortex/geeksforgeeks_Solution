// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Row Sum in a Matrix
// Link: https://www.geeksforgeeks.org/problems/row-sum-in-a-matrix/1

class Solution
{
public:
    vector<int> rowSum(vector<vector<int>> &mat)
    {
        vector<int> v;
        for (auto &vec : mat)
        {
            int sum = 0;
            for (auto &n : vec)
                sum += n;
            v.push_back(sum);
        }
        return v;
    }
};
