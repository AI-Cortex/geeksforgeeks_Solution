// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Largest Pair Sum
// Link: https://www.geeksforgeeks.org/problems/pair-sum--120604/1

class Solution
{
public:
    int pairsum(vector<int> &arr)
    {
        int a = max(arr[0], arr[1]);
        int b = min(arr[0], arr[1]);
        for (size_t i = 2; i < arr.size(); i++)
        {
            if (arr[i] > a)
            {
                b = a;
                a = arr[i];
            }
            else if (arr[i] > b)
                b = arr[i];
        }
        return a + b;
    }
};