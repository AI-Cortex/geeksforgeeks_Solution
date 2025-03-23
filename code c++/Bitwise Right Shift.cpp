// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////

// There are two questions on the site with the name "Bitwise Right Shift"

// Name: Bitwise Right Shift
// Link: https://www.geeksforgeeks.org/problems/bitwise-right-shift/1

void rightShift(int a, int b)
{

    int ans = a >> b;
    cout << ans << endl;
}

// Link: https://www.geeksforgeeks.org/problems/bitwise-right-shift--140107/1

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << (a >> b);

    return 0;
}