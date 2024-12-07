// my profile : 
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
// name : Sum of Series
// LINK : https://www.geeksforgeeks.org/problems/sum-of-series2811/1

class Solution {
  public:
    long long seriesSum(int n) {
        long long int m = n;
        return m * (m + 1)/2;
    }
};