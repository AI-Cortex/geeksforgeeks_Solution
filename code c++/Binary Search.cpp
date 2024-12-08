// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
// name : Binary Search
// link : https://www.geeksforgeeks.org/problems/binary-search-1587115620/1

class Solution {
  public:
    
    int binarysearch(vector<int> &arr, int k) {
        int low=0;
        int high=arr.size()-1;
        int mid;
        int index = -1;
        
        while(low <= high){
            mid = low + (high - low) / 2;
            
            if(arr[mid] == k){
                index = mid;
                if(mid>0 && arr[mid-1]==k)
                    high = mid-1;
                else
                    break;
            }
            
            else if(arr[mid] < k){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return index;
    }
};