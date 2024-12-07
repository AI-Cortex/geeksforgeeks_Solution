// my profile : 
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Floor in a Sorted Array
// link : https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1

class Solution {
  public:

    int findFloor(vector<int>& arr, int k) {

        if(k < arr[0])
            return -1;
        
        int left = 0;
        int right = arr.size()-1;
        int mid;
        int index = arr.size();
        
        while(left<=right){
            mid = left + (right - left)/2;
            
            if(arr[mid]==k){
                return mid;
            }
            
            if(arr[mid] < k){
                index = mid;
                left = mid+1;
            }
            else{
                right = mid -1;
            }
        }
        return index;
    }
};