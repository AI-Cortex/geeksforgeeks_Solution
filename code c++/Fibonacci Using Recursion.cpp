// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Fibonacci Using Recursion
// link : https://www.geeksforgeeks.org/problems/fibonacci-using-recursion/1

class Solution
{
public:
    // Complete this function
    int fibonacci(int n)
    {
        if (n == 1 || n == 2)
            return 1;
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
};