// my profile : 
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Second Largest
// link : https://www.geeksforgeeks.org/problems/second-largest3735/1

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int len = arr.size();
        if(len<2)
            return -1;
            
        int first = INT_MIN;
        int second = INT_MIN;
        for(int i=0; i<len ; i++){
            if(arr[i]>first){
                second = first;
                first = arr[i];
            }
            else if(arr[i]>second  && arr[i]<first){
                second = arr[i];
            }
        }
        if(first == second || second == INT_MIN)
            return -1;
        return second;
    }
};