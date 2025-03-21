// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Print With Space
// Link: https://www.geeksforgeeks.org/problems/print-with-space--115905/1

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    getline(cin, a);
    string b;
    getline(cin, b);
    // Print in the required format and a new line at the end
    cout << a << " " << b;

    return 0;
}