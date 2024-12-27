// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Generate a matrix with each row and column of given sum
// Link: https://www.geeksforgeeks.org/problems/generate-a-matrix-with-each-row-and-column-of-given-sum/1

class Solution
{
public:
    vector<vector<int>> generateMatrix(vector<int> rowSum, vector<int> colSum)
    {
        int n = rowSum.size();
        int m = colSum.size();
        vector<vector<int>> matrix(n, vector<int>(m, 0));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {

                int value = min(rowSum[i], colSum[j]);
                matrix[i][j] = value;
                rowSum[i] -= value;
                colSum[j] -= value;
            }
        }
        return matrix;
    }
};
