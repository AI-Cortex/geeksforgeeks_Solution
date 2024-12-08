// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Majority Element
// link : https://www.geeksforgeeks.org/problems/majority-element-1587115620/1


class Solution {
  public:
    int majorityElement(vector<int>& arr) {

        int num;
        int count=0;
        for(auto n: arr){
            if(count ==0){
                count = 1;
                num = n;
            }
            else if(num == n)
                count ++;
            else
                count --;
        }
        count = 0;
        for(auto n: arr)
            if(n == num)
                count ++;
        
        if(count > arr.size()/2)
            return num;
        return -1;
    }
};