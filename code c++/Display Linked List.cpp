// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Display Linked List
// link : https://www.geeksforgeeks.org/problems/display-linked-list/1

vector<int> displayList(Node *head)
{
    vector<int> v;

    while (head != nullptr)
    {
        v.push_back(head->data);
        head = head->next;
    }
    return v;
}