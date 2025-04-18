// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Count Leaves in Binary Tree
// link : https://www.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1

class Solution
{
public:
    int countLeaves(Node *root)
    {
        if (root == nullptr)
            return 0;
        if (root->left == nullptr && root->right == nullptr)
            return 1;
        return countLeaves(root->left) + countLeaves(root->right);
    }
};