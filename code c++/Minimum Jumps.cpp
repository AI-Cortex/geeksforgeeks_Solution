// my profile : 
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Minimum Jumps
// link : https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int len = arr.size();
        int step = arr[0];
        int i=1;
        int max_step = arr[0];
        int n=1;
        
        while(step>0){
            step--;
            max_step--;
            
            max_step = max(max_step, arr[i]);
            
            if(step==0){
                step=max_step;
                n++;
            }
            
            if(step>= len-i-1 || i==len-1){
                return n;
            }

            i++;

        }
        
        return -1;
    }
};