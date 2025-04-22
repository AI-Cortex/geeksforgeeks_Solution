// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Sum of elements in a matrix
// link : https://www.geeksforgeeks.org/problems/sum-of-elements-in-a-matrix2000/1

class Solution
{
public:
    int sumOfMatrix(int N, int M, vector<vector<int>> Grid)
    {
        int sum = 0;
        for (auto &v : Grid)
        {
            sum += accumulate(v.begin(), v.end(), 0);
        }
        return sum;
    }
};