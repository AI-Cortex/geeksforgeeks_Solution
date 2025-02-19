// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Insertion in deque
// Link: https://www.geeksforgeeks.org/problems/insertion-in-deque--151437/1

class Solution
{
public:
    // Function to insert all elements of the array in deque.
    deque<int> insertInDq(vector<int> &arr)
    {
        deque<int> dq;
        for (auto n : arr)
            dq.push_back(n);
        return dq;
    }
};
