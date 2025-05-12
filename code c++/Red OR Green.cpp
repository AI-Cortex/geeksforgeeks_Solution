// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Red OR Green
// link : https://www.geeksforgeeks.org/problems/red-or-green5711/1

class Solution
{
public:
    int RedOrGreen(int N, string S)
    {
        // code here
        int r = count(S.begin(), S.end(), 'R');
        int g = S.size() - r;
        return min(r, g);
    }
};