// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Reverse a String
// link : https://www.geeksforgeeks.org/problems/java-reverse-a-string0416/1

class Solution
{
public:
    string reverseString(string &s)
    {
        reverse(s.begin(), s.end());
        return s;
    }
};
