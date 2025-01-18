// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Find the Frequency
// link : https://www.geeksforgeeks.org/problems/find-the-frequency/1

class Solution
{
public:
    int findFrequency(vector<int> arr, int x)
    {
        int n = 0;
        for (auto m : arr)
            if (m == x)
                n++;
        return n;
    }
};
