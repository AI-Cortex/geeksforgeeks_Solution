// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Sum of Binary Tree
// Link: https://www.geeksforgeeks.org/problems/sum-of-binary-tree/1

class Solution
{
public:
    int sumBT(Node *root)
    {
        if (root == nullptr)
            return 0;
        return root->data + sumBT(root->left) + sumBT(root->right);
    }
};