// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Reducing Walls
// Link: https://www.geeksforgeeks.org/problems/reducing-walls4443/1

class Solution
{
public:
    int reducingWalls(vector<int> &arr, int k)
    {
        int t = 0;

        for (auto n : arr)
            if (n > k)
                t += n / k - (n % k == 0);

        return t;
    }
};