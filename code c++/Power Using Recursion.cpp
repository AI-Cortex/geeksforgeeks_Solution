// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Power Using Recursion
// link : https://www.geeksforgeeks.org/problems/power-using-recursion/1

class Solution {
  public:
    // Complete this function
    int RecursivePower(int n, int p) {
        if(p==0)
            return 1;
        int t = RecursivePower(n, p/2);
        if(p&1)
            return t*t*n;
        return t*t;
    }
};
