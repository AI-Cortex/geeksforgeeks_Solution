// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Sum of diagonals
// link : https://www.geeksforgeeks.org/problems/sum-of-diagonals-1587115621/1

int sumDiagonal(int N, int M[][N])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += M[i][i];
    return sum;
}