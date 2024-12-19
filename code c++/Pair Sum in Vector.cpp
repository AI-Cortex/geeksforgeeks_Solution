// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Pair Sum in Vector
// Link: https://www.geeksforgeeks.org/problems/pair-sum-in-vector/1


void sum(vector<pair<int,int>>v)
{
    long long sum=0;
    for(auto &p : v){
        sum += p.second;
    }
    cout<<sum;
    cout<<endl;
}