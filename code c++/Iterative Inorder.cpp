// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Iterative Inorder
// Link: https://www.geeksforgeeks.org/problems/inorder-traversal-iterative/1

class Solution
{
public:
    vector<int> inOrder(Node *root)
    {
        stack<Node *> st;
        vector<int> v;
        st.push(root);
        Node *n;

        while (st.empty() != true)
        {
            n = st.top();
            if (n->left == nullptr)
            {
                v.push_back(n->data);
                st.pop();
                if (n->right != nullptr)
                {
                    st.push(n->right);
                    n->right = nullptr;
                }
            }
            else
            {
                st.push(n->left);
                n->left = nullptr;
            }
        }
        return v;
    }
};