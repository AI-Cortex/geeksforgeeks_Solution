// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Find element in Set using find
// link : https://www.geeksforgeeks.org/problems/find-element-in-set-using-find/1

bool sExists(set<int> s, int x)
{
    return s.find(x) != s.end();
}