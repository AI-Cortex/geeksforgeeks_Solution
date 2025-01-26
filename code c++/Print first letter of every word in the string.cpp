// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Print first letter of every word in the string
// Link: https://www.geeksforgeeks.org/problems/print-first-letter-of-every-word-in-the-string3632/1

class Solution
{
public:
    string firstAlphabet(string S)
    {
        int len = S.size();
        string out;
        out += S[0];
        for (int i = 1; i < len; i++)
        {
            if (S[i] == ' ')
                out += S[++i];
        }
        return out;
    }
};