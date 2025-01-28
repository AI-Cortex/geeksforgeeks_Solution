// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Reverse a Doubly Linked List
// Link: https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1

class Solution
{
public:
    // Function to reverse a doubly linked list
    DLLNode *reverseDLL(DLLNode *head)
    {
        DLLNode *end = head;
        DLLNode *t = head;
        while (end->next != nullptr)
        {
            end = end->next;
        }
        while (end != head)
        {
            swap(head->data, end->data);
            head = head->next;
            if (end == head)
                break;
            end = end->prev;
        }

        return t;
    }
};