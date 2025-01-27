// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Minimum element in BST
// Link: https://www.geeksforgeeks.org/problems/minimum-element-in-bst/1

class Solution
{
public:
    int minValue(Node *root)
    {
        if (root->left == nullptr)
            return root->data;
        return minValue(root->left);
    }
};
