// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Array Leaders
// link : https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        vector <int> v;
        int len = arr.size();
        v.push_back(arr[len-1]);
        int max = v[0];
        for(int i=len-2 ; i>-1; i--){
            if(arr[i]>= max){
                v.push_back(arr[i]);
                max = arr[i];
            }
        }
        reverse(v.begin(), v.end());
        return v;
    }
};