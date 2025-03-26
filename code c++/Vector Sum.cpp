// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Vector Sum
// Link: https://www.geeksforgeeks.org/problems/vector-sum/1


int sumMe(vector<int> arr, int n)
{
    return accumulate(arr.begin(), arr.end(), 0);
}
