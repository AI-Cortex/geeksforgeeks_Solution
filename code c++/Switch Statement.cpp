// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Switch Statement
// link : https://www.geeksforgeeks.org/problems/switch-statement--150234/1

#include <iostream>
using namespace std;

int main()
{
    // code here
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "One";
        break;
    case 2:
        cout << "Two";
        break;
    case 3:
        cout << "Three";
        break;
    case 4:
        cout << "Four";
        break;
    case 5:
        cout << "Five";
        break;
    case 6:
        cout << "Six";
        break;
    case 7:
        cout << "Seven";
        break;
    case 8:
        cout << "Eight";
        break;
    case 9:
        cout << "Nine";
        break;
    default:
        cout << "Unknown";
    }

    return 0;
}