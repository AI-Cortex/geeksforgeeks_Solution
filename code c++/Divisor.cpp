// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Divisor
// link : https://www.geeksforgeeks.org/problems/divisor--125050/1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t = 0;
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0)
            cout << i << " ";
    cout << n;
    return 0;
}