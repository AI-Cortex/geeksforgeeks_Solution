// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Is Linked List Length Even?
// link : https://www.geeksforgeeks.org/problems/linked-list-length-even-or-odd/1

class Solution
{
public:
    bool isLengthEven(struct Node **head)
    {
        int len = 0;
        Node *t = *head;
        while (t)
        {
            t = t->next;
            len++;
        }
        return len % 2 == 0;
    }
};