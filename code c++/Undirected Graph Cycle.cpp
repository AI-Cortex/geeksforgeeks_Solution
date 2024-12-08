// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
// name : Undirected Graph Cycle
// link : https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1


class Solution {
  public:
    
    bool dfs(vector<vector<int>>& adj, int node, vector<int> &visited, int parent){
        visited[node] = 1;
        int len = adj[node].size();
        for(int i=0 ; i<len ; i++){
            if(adj[node][i] != parent){
                if(visited[adj[node][i]]==1)
                    return true;
                if(dfs(adj, adj[node][i], visited, node))
                    return true;
            }
        }
        return false;
    }
    
    bool isCycle(vector<vector<int>>& adj) {
        int len = adj.size();
        vector<int> visited(len, 0);
        for(int i=0; i<len ; i++){
            if(visited[i] == 0 && dfs(adj, i, visited, -1))
                return true;
        }
        return 0;
    }
};