// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Vector min_element
// link : https://www.geeksforgeeks.org/problems/vector-min-element--151110/1

int vMin(vector<int> &arr)
{
    return *min_element(arr.begin(), arr.end());
}
