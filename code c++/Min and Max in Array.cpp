// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Min and Max in Array
// Link: https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

class Solution {
    public:
      pair<int, int> getMinMax(vector<int> arr) {
          int max_ = arr[0];
          int min_ = arr[0];
          for(int i=1; i<arr.size(); i++){
              max_ = max(max_, arr[i]);
              min_ = min(min_, arr[i]);
          }
          return {min_, max_};
              
      }
  };
