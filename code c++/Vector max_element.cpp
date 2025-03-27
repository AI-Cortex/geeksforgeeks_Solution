// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Vector max_element
// Link: https://www.geeksforgeeks.org/problems/vector-max-element--145411/1

int vMax(vector<int> &arr)
{
    return *max_element(arr.begin(), arr.end());
}