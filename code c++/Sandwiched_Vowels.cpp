// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Sandwiched_Vowels
// Link: https://www.geeksforgeeks.org/problems/sandwiched-vowels5158/1

class Solution
{

public:
    string Sandwiched_Vowel(string &s)
    {
        map<char, int> m = {
            {'a', 1},
            {'e', 1},
            {'i', 1},
            {'o', 1},
            {'u', 1},
        };

        string result;
        result.resize(s.size());
        int j = 1;
        result[0] = s[0];
        for (size_t i = 1; i < s.size() - 1; i++)
        {
            if (m[s[i]] && m[s[i - 1]] == 0 && m[s[i + 1]] == 0)
                continue;
            else
                result[j++] = s[i];
        }
        result[j] = s[s.size() - 1];
        return result;
    }
};