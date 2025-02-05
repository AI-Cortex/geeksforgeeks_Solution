// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Encode and Decode Strings
// Link: https://www.geeksforgeeks.org/problems/encode-and-decode-strings/1

class Solution
{
public:
    string encode(vector<string> &s)
    {
        string str;
        for (auto &a : s)
            str += a + " ";
        return str;
    }

    vector<string> decode(string &s)
    {
        stringstream ss(s);
        string t;
        vector<string> v;

        while (getline(ss, t, ' '))
            v.push_back(t);
        return v;
    }
};
