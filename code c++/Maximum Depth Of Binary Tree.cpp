// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Maximum Depth Of Binary Tree
// Link: https://www.geeksforgeeks.org/problems/maximum-depth-of-binary-tree/1

class Solution
{
public:
    int maxDepth(Node *root)
    {
        if (root == nullptr)
            return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};