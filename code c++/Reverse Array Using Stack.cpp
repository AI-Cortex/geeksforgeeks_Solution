// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Reverse Array Using Stack
// link : https://www.geeksforgeeks.org/problems/reverse-array-using-stack--143151/1

class Solution
{
public:
    void reverseArray(vector<int> &arr)
    {

        // Your code here
        stack<int> st;
        for (auto n : arr)
            st.push(n);

        int i = 0;
        while (!st.empty())
        {
            arr[i++] = st.top();
            st.pop();
        }
        // Reverse the array
    }
};