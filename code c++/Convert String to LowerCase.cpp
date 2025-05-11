// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Convert String to LowerCase
// link : https://www.geeksforgeeks.org/problems/java-convert-string-to-lowercase2313/1

class Solution
{
public:
    string toLower(string &s)
    {
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c)
                  { return std::tolower(c); });
        return s;
    }
};