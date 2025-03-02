// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Print Square Wall Using Nested Loops
// Link: https://www.geeksforgeeks.org/problems/print-square-wall-2-1605683124--114227/1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << "* ";
        cout << "\n";
    }
    return 0;
}