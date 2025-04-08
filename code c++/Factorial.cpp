// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Factorial
// link : https://www.geeksforgeeks.org/problems/factorial-1598335080/1

int nFactorial(int n)
{
    int ans = 1;

    for (int i = 2; i <= n; i++)
        ans *= i;

    return ans;
}