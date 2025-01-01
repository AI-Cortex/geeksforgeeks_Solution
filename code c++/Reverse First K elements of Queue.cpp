// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Reverse First K elements of Queue
// Link: https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

class Solution
{
public:
    queue<int> modifyQueue(queue<int> q, int k)
    {
        queue<int> q2;
        stack<int> s;
        while (k--)
        {
            s.push(q.front());
            q.pop();
        }
        while (!s.empty())
        {
            q2.push(s.top());
            s.pop();
        }
        while (!q.empty())
        {
            q2.push(q.front());
            q.pop();
        }
        return q2;
    }
};
