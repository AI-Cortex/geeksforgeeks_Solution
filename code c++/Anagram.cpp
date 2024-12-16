// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Anagram
// Link: https://www.geeksforgeeks.org/problems/anagram-1587115620/1

class Solution
{
public:
    bool areAnagrams(string &s1, string &s2)
    {
        const int LEN = 26;
        vector<int> v(LEN, 0);
        for (auto c : s1)
        {
            v[c - 'a']++;
        }
        for (auto c : s2)
        {
            v[c - 'a']--;
        }
        for (auto n : v)
        {
            if (n != 0)
                return false;
        }
        return true;
    }
};