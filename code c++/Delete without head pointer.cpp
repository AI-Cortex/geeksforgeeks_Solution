// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Delete without head pointer
// Link: https://www.geeksforgeeks.org/problems/delete-without-head-pointer/1

class Solution
{
public:
    void deleteNode(Node *del_node)
    {
        Node *prev = del_node;
        while (del_node != nullptr && del_node->next != nullptr)
        {
            del_node->data = del_node->next->data;
            prev = del_node;
            del_node = del_node->next;
        }
        prev->next = nullptr;
    }
};