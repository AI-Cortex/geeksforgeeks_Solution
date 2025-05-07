// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Pairing elements
// link : https://www.geeksforgeeks.org/problems/pairing-elements/1

void arrayOfPairs(int arr[], int n, pair<int, int> res[], int m)
{

    for (int i = 0, j = 0; i < m; i++, j++)
        res[i] = {arr[j], arr[n - j - 1]};
}