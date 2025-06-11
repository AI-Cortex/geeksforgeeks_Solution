// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Stack designer
// link : https://www.geeksforgeeks.org/problems/stack-designer/1

class Solution
{
public:
    stack<int> push(vector<int> &arr)
    {
        stack<int> s;
        for (auto n : arr)
            s.push(n);
        return s;
    }

    void pop(stack<int> s)
    {
        while (!s.empty())
        {
            cout << s.top() << " ";
            s.pop();
        }
    }
};