// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Queue Push & Pop
// link : https://www.geeksforgeeks.org/problems/queue-designer/1

class Solution
{
public:
    queue<int> fillQ(const vector<int> &arr)
    {
        queue<int> q;
        for (auto n : arr)
            q.push(n);
        return q;
    }

    void emptyQ(queue<int> &q)
    {
        while (!q.empty())
        {
            cout << q.front() << " ";
            q.pop();
        }
        cout << "\n";
    }
};