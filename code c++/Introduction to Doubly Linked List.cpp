// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Introduction to Doubly Linked List
// Link: https://www.geeksforgeeks.org/problems/introduction-to-doubly-linked-list/1

class Solution
{
public:
    Node *constructDLL(vector<int> &arr)
    {
        Node *n = new Node(arr[0]);
        Node *t = n;
        for (int i = 1; i < arr.size(); i++)
        {
            Node *t1 = new Node(arr[i]);
            t->next = t1;
            t1->prev = t;
            t = t1;
        }
        return n;
    }
};
