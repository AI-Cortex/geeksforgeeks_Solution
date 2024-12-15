// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Maximum Product Subarray
// Link: https://www.geeksforgeeks.org/problems/maximum-product-subarray3604/0

class Solution
{
public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr)
    {
        int current_max = arr[0];
        int current_min = arr[0];
        int max_ = arr[0];
        int temp;
        int len = arr.size();
        for (int i = 1; i < len; i++)
        {
            temp = max({
                arr[i],
                arr[i] * current_max,
                arr[i] * current_min,
            });

            current_min = min({
                arr[i],
                arr[i] * current_max,
                arr[i] * current_min,
            });
            current_max = temp;
            max_ = max(max_, current_max);
        }
        return max_;
    }
};