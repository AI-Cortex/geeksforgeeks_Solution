// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Pattern 4
// Link: https://www.geeksforgeeks.org/problems/triangle-number-1661428795/1

class Solution
{
public:
    void printTriangle(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << i + 1 << " ";
            }
            cout << "\n";
        }
    }
};
