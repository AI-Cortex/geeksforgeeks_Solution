// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Count zeros in a sorted matrix
// link : https://www.geeksforgeeks.org/problems/count-zeros-in-a-sorted-matrix/1

class Solution
{
public:
    int countZeros(vector<vector<int>> A)
    {
        int row = 0;
        int col = A[0].size();
        int zero = 0;

        while (col && row < A.size())
        {
            if (A[row][col - 1] == 0)
            {
                zero += col;
                row++;
            }
            else
                col--;
        }
        return zero;
    }
};