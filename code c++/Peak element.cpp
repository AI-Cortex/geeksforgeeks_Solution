// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
// name : Peak element
// link : https://www.geeksforgeeks.org/problems/peak-element/1

class Solution {
  public:
    int peakElement(vector<int> &arr) {
        int len = arr.size();
        if(len==1 || arr[0]>arr[1] ){
            return 0;
        }
        if(arr[len-1]>arr[len-2]){
            return len-1;
        }
            
        
        for(int i=1; i<len; i++){
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
                return i;
        }
    }
};