// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Indexes of Subarray Sum
// link : https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

class Solution {
public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int len = arr.size();
        vector<int> v(len, 0);
        int start = 0;
        int end = 0;
        int sum = 0;
        while(end<len){

            if(sum<target){
                sum += arr[end];
                end++;
            }
            while(sum>target){
                sum -= arr[start];
                start++;
            }
            if(sum == target)
                return {start+1, end};
        }
        return {-1};
    }
    
};