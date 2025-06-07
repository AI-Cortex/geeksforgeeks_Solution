// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Fibonacci Number
// link : https://www.geeksforgeeks.org/problems/fibonacci-number-1605700704/1

// User function Template for C++

int fibonacci(int n)
{
    int a = 0, b = 1, c = 0;
    for (int i = 0; i < n; i++)
    {
        tie(a, b) = make_tuple(b, c);
        c = a + b;
    }
    return c;
}