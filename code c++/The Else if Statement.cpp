// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : The Else if Statement
// link : https://www.geeksforgeeks.org/problems/the-else-if-statement--121819/1

#include <iostream>
using namespace std;

int main()
{
    // code here
    int a;
    cin >> a;
    if (a > 100)
        cout << "Big";
    else if (a < 10)
        cout << "Small";
    else
        cout << "Number";

    return 0;
}
