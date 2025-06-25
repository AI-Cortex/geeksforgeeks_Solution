// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Palindrome String
// link : https://www.geeksforgeeks.org/problems/palindrome-string0817/1

class Solution
{
public:
    bool isPalindrome(string &s)
    {

        for (size_t i = 0; i < s.size() / 2; i++)
            if (s[i] != s[s.size() - 1 - i])
                return false;
        return true;
    }
};