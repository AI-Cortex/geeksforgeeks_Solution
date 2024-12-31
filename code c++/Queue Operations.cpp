// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Queue Operations
// Link: https://www.geeksforgeeks.org/problems/queue-operations/1

class Solution
{
public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k)
    {
        q.push(k);
    }

    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k)
    {
        int t = 0, f = 0;
        queue<int> q1 = q;
        while (!q1.empty())
        {
            t = q1.front();
            q1.pop();
            if (k == t)
                f++;
        }
        return f;
    }
};