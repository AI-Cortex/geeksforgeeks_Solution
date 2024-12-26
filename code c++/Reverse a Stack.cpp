// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Reverse a Stack
// Link: https://www.geeksforgeeks.org/problems/reverse-a-stack/1

class Solution
{
public:
    void Reverse(stack<int> &St)
    {
        if (St.empty())
            return;
        int top = St.top();
        St.pop();
        Reverse(St);
        insert_end(St, top);
    }
    void insert_end(stack<int> &st, int n)
    {
        if (st.empty())
            st.push(n);
        else
        {
            int top = st.top();
            st.pop();
            insert_end(st, n);
            st.push(top);
        }
    }
};
