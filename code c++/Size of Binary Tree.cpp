// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Size of Binary Tree
// Link: https://www.geeksforgeeks.org/problems/size-of-binary-tree/1

class Solution
{
public:
    int getSize(Node *node)
    {
        if (node == nullptr)
            return 0;
        return 1 + getSize(node->left) + getSize(node->right);
    }
};
