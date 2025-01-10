// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Sort and Reverse Vector
// Link: https://www.geeksforgeeks.org/problems/sort-and-reverse-vector/1

vector<int> sortVector(vector<int> v)
{
    sort(v.begin(), v.end());
    return v;
}
vector<int> reverseVector(vector<int> v)
{
    reverse(v.begin(), v.end());
    return v;
}