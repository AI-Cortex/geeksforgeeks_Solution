// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Frequency in a Linked List
// Link: https://www.geeksforgeeks.org/problems/occurence-of-an-integer-in-a-linked-list/1

class Solution
{
public:
    int count(struct Node *head, int key)
    {
        int n = 0;
        while (head != nullptr)
        {
            if (head->data == key)
                n++;
            head = head->next;
        }
        return n;
    }
};
