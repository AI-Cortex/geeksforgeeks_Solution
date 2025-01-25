// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Transform to Sum Tree
// Link: https://www.geeksforgeeks.org/problems/transform-to-sum-tree--170645/1

class Solution
{
public:
    void toSumTree(Node *node)
    {
        f(node);
    }

    int f(Node *node)
    {
        if (node == nullptr)
            return 0;
        int p = node->data;
        int left = f(node->left);
        int right = f(node->right);
        node->data = left + right;

        return p + left + right;
    }
};
