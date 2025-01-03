// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Queue Reversal
// Link: https://www.geeksforgeeks.org/problems/queue-reversal/1

class Solution
{
public:
    queue<int> reverseQueue(queue<int> &q)
    {
        stack<int> st;
        while (!q.empty())
        {
            st.push(q.front());
            q.pop();
        }
        while (!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
        return q;
    }
};