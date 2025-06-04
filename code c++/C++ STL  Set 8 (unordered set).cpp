// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : C++ STL | Set 8 (unordered set)
// link : https://www.geeksforgeeks.org/problems/c-stl-set-8-unordered-set/1

/* You are required to complete below methods */

/*inserts an element x to the unordered set s */
void insert(unordered_set<int> &s, int x)
{
    s.insert(x);
}

/*erases an element x from the unordered set s */
void erase(unordered_set<int> &s, int x)
{

    s.erase(x);
}

/*returns the size of the unordered set s */

int size(unordered_set<int> &s)
{
    return s.size();
}

/*returns 1 if the element x is present

in unordered set s else returns -1 */
int find(unordered_set<int> &s, int x)
{
    return s.count(x) ? 1 : -1;
}