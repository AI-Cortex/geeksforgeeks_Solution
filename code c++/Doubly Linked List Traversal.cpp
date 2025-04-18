// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Doubly Linked List Traversal
// link : https://www.geeksforgeeks.org/problems/display-doubly-linked-list--154650/1

vector<int> displayList(Node *head)
{
    Node *t = head;
    vector<int> v;
    while (t != nullptr)
    {
        v.push_back(t->data);
        t = t->next;
    }
    return v;
}