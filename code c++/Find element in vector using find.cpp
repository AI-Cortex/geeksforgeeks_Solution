// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Find element in vector using find
// Link: https://www.geeksforgeeks.org/problems/find-element-in-vector-using-find--141628/1

bool vExists(vector<int> v, int x) {
    return find(v.begin(), v.end(), x) != v.end();
}