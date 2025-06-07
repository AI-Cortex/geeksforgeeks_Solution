// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Pattern 13
// link : https://www.geeksforgeeks.org/problems/triangle-pattern-1661718712/1

class Solution
{
public:
    void printTriangle(int n)
    {
        int out = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
                cout << out++ << " ";
            cout << "\n";
        }
    }
};