// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Detect Loop in linked list
// link : https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1

class Solution
{
public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node *head)
    {
        Node *one = head;
        if (head == nullptr || head->next == nullptr || head->next->next == nullptr)
            return false;
        Node *two = head->next->next;

        while (one != two)
        {
            one = one->next;

            if (two->next == nullptr || two->next->next == nullptr)
                return false;
            two = two->next->next;
        }
        return true;
    }
};