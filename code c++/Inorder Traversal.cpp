// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Inorder Traversal
// Link: https://www.geeksforgeeks.org/problems/inorder-traversal/1

class Solution
{
public:
    vector<int> inOrder(Node *root)
    {
        vector<int> v;
        stack<Node *> s;
        Node *current = root;
        while (!s.empty() || current != nullptr)
        {

            while (current != nullptr)
            {
                s.push(current);
                current = current->left;
            }

            current = s.top();
            s.pop();
            v.push_back(current->data);
            current = current->right;
        }

        return v;
    }
};