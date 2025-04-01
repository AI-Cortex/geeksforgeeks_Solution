// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Table Difference
// link : https://www.geeksforgeeks.org/problems/table-difference--155953/1

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    for (int i = 1; i < 11; i++)
        cout << n1 * i - n2 * i << " ";

    return 0;
}
