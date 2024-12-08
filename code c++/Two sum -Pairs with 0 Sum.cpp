// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
// name : Two sum -Pairs with 0 Sum
// link : https://www.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1


class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        unordered_map<int, int> m;
        vector<vector<int>> v;
        int z = 0;
        for(auto n : arr){
            if(n==0){
                z++;
                continue;
            }
                
            if(m.find(-n) != m.end() && m.find(n) == m.end()){
                v.push_back({min(n, -n), max(n, -n)});
            }
            m[n] = 1;
            
        }
        if(z>1)
            v.push_back({0, 0});
        sort(v.begin(), v.end());
        return v;
    }
};

