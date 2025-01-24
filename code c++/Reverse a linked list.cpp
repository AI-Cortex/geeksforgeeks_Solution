// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Reverse a linked list
// Link: https://www.geeksforgeeks.org/problems/reverse-a-linked-list/1

class Solution
{
public:
    Node *reverseList(struct Node *head)
    {
        struct Node *start;
        f(head, start);
        head->next = nullptr;
        return start;
    }
    void f(struct Node *head, struct Node *&start)
    {
        if (head != nullptr)
        {
            f(head->next, start);

            if (head->next != nullptr)
                head->next->next = head;
            else
            {
                start = head;
            }
        }
    }
};