// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : BFS of graph
// link : https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution
{
public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj)
    {
        set<int> s;
        vector<int> out;
        queue<int> q;
        q.push(0);

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            if (s.count(node))
                continue;

            s.insert(node);
            out.push_back(node);

            for (auto n : adj[node])
                q.push(n);
        }
        return out;
    }
};