// my profile : 
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Kth Smallest
// link : https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1



class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        sort(arr.begin(), arr.end());
        return arr[k-1];
    }
};