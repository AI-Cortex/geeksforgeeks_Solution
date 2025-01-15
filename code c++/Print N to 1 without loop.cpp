// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Print N to 1 without loop
// Link: https://www.geeksforgeeks.org/problems/print-n-to-1-without-loop/1

class Solution
{
public:
    void printNos(int N)
    {
        if (N == 0)
            return;
        cout << N << " ";
        printNos(N - 1);
    }
};