// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Sorted Frequency
// link : https://www.geeksforgeeks.org/problems/sorted-frequency/1

class Solution
{
public:
    // Complete this function
    void freqSorted(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int t = 1;
        int past = arr[0];
        for (size_t i = 1; i < arr.size(); i++)
        {
            if (arr[i] == past)
                t++;
            else
            {
                cout << past << " " << t << "\n";
                past = arr[i];
                t = 1;
            }
        }
        cout << past << " " << t << "\n";
    }
};
