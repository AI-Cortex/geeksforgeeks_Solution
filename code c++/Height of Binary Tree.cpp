// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Height of Binary Tree
// Link: https://www.geeksforgeeks.org/problems/height-of-binary-tree/1

class Solution
{
public:
    int height(struct Node *node)
    {
        if (node == nullptr)
            return -1;
        return 1 + max(height(node->left), height(node->right));
    }
};