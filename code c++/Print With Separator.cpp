// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Print With Separator
// link : https://www.geeksforgeeks.org/problems/print-with-separator--121510/1

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    getline(cin, a);
    string b;
    getline(cin, b);
    string sep;
    getline(cin, sep);
    // Print in the required format and a new line
    cout << a << sep << b << endl;
    return 0;
}
