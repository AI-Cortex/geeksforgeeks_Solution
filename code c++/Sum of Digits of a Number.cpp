// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Sum of Digits of a Number
// link : https://www.geeksforgeeks.org/problems/sum-of-digits-of-a-number/1

class Solution
{
public:
    int sumOfDigits(int n)
    {
        int sum = 0;
        while (n)
        {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
};