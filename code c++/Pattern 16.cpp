// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Pattern 16
// Link: https://www.geeksforgeeks.org/problems/triangle-pattern-1662285334/1

class Solution
{
public:
    void printTriangle(int n)
    {
        int ch = 65;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
                cout << char(ch);
            cout << "\n";
            ch++;
        }
    }
};
