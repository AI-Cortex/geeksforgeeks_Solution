// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Array Duplicates
// link : https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1


class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        map<int, int> d;
        
        for(auto n : arr){
            d[n] += 1;
        }
        vector <int> v;
        for (auto pair : d) {
            if(pair.second>1)
                v.push_back(pair.first);
        }
        
        sort(v.begin(), v.end());
        return v;
    }
};
