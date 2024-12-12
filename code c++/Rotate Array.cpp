// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Rotate Array
// Link: https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1

class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        int len = arr.size();
        d %= len;
        
        reverse(arr.begin()  , arr.begin()+d);
        reverse(arr.begin()+d, arr.end());
        reverse(arr.begin()  , arr.end());
    }
};