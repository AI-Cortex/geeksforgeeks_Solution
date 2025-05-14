// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Lower case to upper case
// link : https://www.geeksforgeeks.org/problems/lower-case-to-upper-case3410/1

string to_upper(string str)
{
    transform(str.begin(), str.end(), str.begin(),
              [](unsigned char ch)
              { return toupper(ch); });
    return str;
}