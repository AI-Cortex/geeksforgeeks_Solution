// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Postorder Traversal
// link : https://www.geeksforgeeks.org/problems/postorder-traversal/1

class Solution
{
public:
    // Function to return a list containing the postorder traversal of the tree.
    vector<int> postOrder(Node *root)
    {
        vector<int> v;

        postOrder(root, v);
        return v;
    }
    void postOrder(Node *root, vector<int> &v)
    {
        if (root == nullptr)
            return;
        postOrder(root->left, v);
        postOrder(root->right, v);
        v.push_back(root->data);
    }
};