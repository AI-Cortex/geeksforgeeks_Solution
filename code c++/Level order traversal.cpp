// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Level order traversal
// Link: https://www.geeksforgeeks.org/problems/level-order-traversal/1

class Solution
{
public:
    vector<vector<int>> levelOrder(Node *root)
    {
        vector<vector<int>> v;
        vector<int> temp;

        queue<Node *> q;
        q.push(root);
        q.push(nullptr);

        while (!q.empty())
        {
            Node *n = q.front();
            q.pop();
            if (n)
            {
                temp.push_back(n->data);

                if (n->left)
                    q.push(n->left);

                if (n->right)
                    q.push(n->right);
            }
            else
            {
                v.push_back(temp);
                temp.clear();
                if (q.empty())
                    break;
                q.push(nullptr);
            }
        }
        return v;
    }
};
