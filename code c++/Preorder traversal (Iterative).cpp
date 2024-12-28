// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Preorder traversal (Iterative)
// Link: https://www.geeksforgeeks.org/problems/preorder-traversal-iterative/1

class Solution
{
public:
    vector<int> preOrder(Node *root)
    {
        vector<int> v;
        f(root, v);
        return v;
    }
    void f(Node *root, vector<int> &v)
    {
        if (root == nullptr)
            return;
        v.push_back(root->data);
        f(root->left, v);
        f(root->right, v);
    }
};
