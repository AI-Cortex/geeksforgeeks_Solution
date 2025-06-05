// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Magical String[Duplicate Problem]
// link : https://www.geeksforgeeks.org/problems/magical-string3653/1

class Solution
{
public:
    string magicalString(string S)
    {
        for (auto &ch : S)
        {
            ch = ('z' - ch) + 'a';
        }
        return S;
    }
};