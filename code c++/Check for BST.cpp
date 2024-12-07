// my profile : 
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
// name : Check for BST
// link : https://www.geeksforgeeks.org/problems/check-for-bst/1

class Solution {
  public:
  
    bool in_order(Node* root, int &prev){
        if(root==nullptr)
            return true;
        
        if(in_order(root->left, prev) == false)
            return false;
        
        if(prev >= root->data)
            return false;
        
        prev = root->data;
        
        return in_order(root->right, prev);
    }
    
    bool isBST(Node* root) {
        if(root==nullptr)
            return true;
        int prev = INT_MIN;
        return in_order(root, prev);
    }
};