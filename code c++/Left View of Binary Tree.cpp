// my profile : 
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
// name : Left View of Binary Tree
// link : https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1

class Solution {
  public:
    vector<int> leftView(Node *root) {
        vector<int> nodes;
        int max_height = -1;
        int height = 0;
        f(root, max_height, height, nodes);
        return nodes;
    }
    void f(Node *root, int &max_height, int height, vector<int> &nodes){
        if(root==nullptr)
            return;
        
        if(height>max_height){
            nodes.push_back(root->data);
            max_height = height;
        }
        
        f(root->left, max_height, height+1, nodes);
        f(root->right, max_height, height+1, nodes);
    }
};