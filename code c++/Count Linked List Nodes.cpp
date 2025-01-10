// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Count Linked List Nodes
// Link: https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1

class Solution
{
public:
    int getCount(struct Node *head)
    {
        int n = 0;
        while (head != nullptr)
        {
            n++;
            head = head->next;
        }
        return n;
    }
};