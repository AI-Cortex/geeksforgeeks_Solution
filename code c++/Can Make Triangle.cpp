// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Can Make Triangle
// Link: https://www.geeksforgeeks.org/problems/can-make-triangle--170637/1

class Solution{
    public:
    vector<int> canMakeTriangle(vector<int> A, int N){
        vector<int> v(N-2, 0);
        for(int i=0; i<N-2; i++){
            if(A[i]+A[i+1]>A[i+2] && A[i]+A[i+2]>A[i+1] && A[i+1]+A[i+2]>A[i]){
                v[i] = 1;
            }

        }
        return v;
    }
}; 