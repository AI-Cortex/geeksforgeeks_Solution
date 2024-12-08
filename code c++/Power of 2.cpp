// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Power of 2
// link : https://www.geeksforgeeks.org/problems/power-of-2-1587115620/1


class Solution {
  public:
    
    bool isPowerofTwo(int n) {
        return !(n-1 & n);
    }
};