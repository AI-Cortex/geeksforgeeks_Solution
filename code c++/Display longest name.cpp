// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Display longest name
// Link: https://www.geeksforgeeks.org/problems/display-longest-name0853/1

class Solution
{
public:
    string longest(vector<string> &arr)
    {
        string s;
        for (const auto &str : arr)
            if (s.size() < str.size())
                s = str;
        return s;
    }
};
