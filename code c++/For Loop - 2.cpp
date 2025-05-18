// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : For Loop - 2
// link : https://www.geeksforgeeks.org/problems/for-loop-2--182531/1

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (size_t i = 0; i < s.size(); i += 2)
        cout << s[i];

    return 0;
}
