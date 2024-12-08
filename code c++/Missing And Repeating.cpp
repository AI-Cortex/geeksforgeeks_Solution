// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
// name : Missing And Repeating
// link : https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1


class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        map<int, int> map;
        for(auto n : arr){
            map[n] = map[n] + 1;
        }
        
        int a=-1, b=-1;
        for(int i=1; i<=arr.size(); i++){
            if(map[i]>1)
                b = i;
            if(map[i]<1)
                a = i;
        }
        return {b , a};
    }
};