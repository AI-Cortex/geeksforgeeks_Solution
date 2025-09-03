// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Size of Doubly Linked List
// link : https://www.geeksforgeeks.org/problems/size-of-doubly-linked-list--114556/1

class Solution
{
public:
    int findSize(Node *head)
    {
        int t(0);
        while (head)
        {
            head = head->next;
            t++;
        }
        return t;
    }
};