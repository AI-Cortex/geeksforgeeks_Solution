// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Count Occurrence of digit k
// Link: https://www.geeksforgeeks.org/problems/find-number-of-numbers/1

class Solution
{
public:
    int num(int k, vector<int> &arr)
    {
        int t = 0;
        string s;
        for (auto n : arr)
        {
            s = to_string(n);
            for (auto ch : s)
                if (ch - '0' == k)
                    t++;
        }
        return t;
    }
};
