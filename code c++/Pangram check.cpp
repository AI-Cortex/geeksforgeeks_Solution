// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Pangram check
// link : https://www.geeksforgeeks.org/problems/pangram-check--155158/1

bool checkPangram(string &s)
{
    vector<bool> v(26);

    for (size_t i = 0; i < s.size(); i++)
        v[tolower(s[i]) - 'a'] = 1;

    return accumulate(v.begin(), v.end(), 0) == 26;
}