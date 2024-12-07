// my profile : 
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Missing in Array
// link : https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1


class Solution {
public:
    int missingNumber(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for(int i=0; i<arr.size(); i++)
            if(arr[i]!=i+1){
                return i+1;
            }
        return arr.size()+1;
    }
};
