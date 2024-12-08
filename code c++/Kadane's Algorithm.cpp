// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Kadane's Algorithm
// link : https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1


class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        int max_sum=arr[0];
        int current_sum = arr[0];
        int len = arr.size();
        
        for(int i=1; i<len; i++){
            current_sum = max(current_sum+arr[i], arr[i]);
            max_sum = max(max_sum, current_sum);
            
        }
        return max_sum;
    }
};