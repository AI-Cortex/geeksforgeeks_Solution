// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Vector insertion
// link : https://www.geeksforgeeks.org/problems/vector-insertion/1

vector<int> fillVector(int arr[], int n)
{
    vector<int> v;
    v.reserv(n);
    for (int i = 0; i < n; i++)
        v[i] = arr[i];
}
