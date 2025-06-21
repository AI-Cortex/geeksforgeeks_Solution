// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Vector Erase and Clear
// link : https://www.geeksforgeeks.org/problems/vector-erase-and-clear/1

// User function Template for C++

void eraseAt(vector<int> &arr, int pos)
{
    arr.erase(arr.begin() + pos);
}

void eraseInRange(vector<int> &arr, int start, int end)
{

    arr.erase(arr.begin() + start, arr.begin() + end);
}

void clearAll(vector<int> &arr)
{
    arr.clear();
}