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
        f(node, v);
        return v;
    }
    void f(Node *node, vector<int> &v)
    {
        if (node == nullptr)
            return;
        f(node->left, v);
        f(node->right, v);
        v.push_back(node->data);
    }
};