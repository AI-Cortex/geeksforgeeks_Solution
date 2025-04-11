// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : TypeCast And Double It
// link : https://www.geeksforgeeks.org/problems/typecast-and-double-it--153103/1

#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    getline(cin, num);
    // TypeCast to int double it and print
    cout << stoi(num)*2;

    return 0;
}