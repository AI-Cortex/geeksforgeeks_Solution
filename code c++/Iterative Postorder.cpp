// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Iterative Postorder
// Link: https://www.geeksforgeeks.org/problems/postorder-traversal-iterative/1

class Solution
{
public:
    vector<int> postOrder(Node *node)
    {
        vector<int> v;
        stack<Node *> s;
        s.push(node);
        Node *n;
        while (!s.empty())
        {
            n = s.top();
            s.pop();
            if (n == nullptr)
                continue;
            v.push_back(n->data);
            s.push(n->left);
            s.push(n->right);
        }
        reverse(v.begin(), v.end());
        return v;
    }
};