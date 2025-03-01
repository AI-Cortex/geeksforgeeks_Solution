// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Function Template
// Link: https://www.geeksforgeeks.org/problems/function-template/1

template <class T>
T largest(T arr[], int n)
{
    T max_ = arr[0];
    for (int i = 1; i < n; i++)
        max_ = max(max_, arr[i]);
    return max_;
}
