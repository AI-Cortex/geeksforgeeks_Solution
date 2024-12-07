// my profile : 
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
// name : Equilibrium Point
// link : https://www.geeksforgeeks.org/problems/equilibrium-point-1587115620/1

class Solution {
  public:
    // Function to find equilibrium point in the array.
    int equilibriumPoint(vector<int> &arr) {
        int len = arr.size();
        vector<long long int> left(len, 0);
        vector<long long int> right(len, 0);
        
        left[0] = arr[0];
        right[len-1] = arr[len-1];
        
        for(int i=1; i<len-1 ; i++){
            left[i] = arr[i] + left[i-1];
            right[len-1-i] = arr[len-1-i] + right[len-i];
        }

        for(int i=1; i<len-1; i++){
            if(left[i-1] == right[i+1])
                return i+1;
        }
        return -1;
    }
};