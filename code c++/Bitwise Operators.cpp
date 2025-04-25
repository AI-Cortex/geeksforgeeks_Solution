// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Bitwise Operators
// link : https://www.geeksforgeeks.org/problems/bitwise-operators-1597314674--135255/1

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int d, e, f, g;
    d = a ^ a;
    e = ~(c ^ b);
    f = a & b;
    g = c | d;
    cout << d << ' ' << e << ' ' << f << ' ' << g;
    // perform bitwise operations here

    return 0;
}