// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Search in a Matrix
// Link: https://www.geeksforgeeks.org/problems/search-in-a-matrix--021840/0

class Solution
{
public:
    // Function to search a given integer in a matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x)
    {
        for (const auto &v : mat)
            for (int n : v)
                if (n == x)
                    return true;
        return false;
    }
};