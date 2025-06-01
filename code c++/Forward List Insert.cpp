// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Forward List Insert
// link : https://www.geeksforgeeks.org/problems/forward-list-insert/1

forward_list<int> insertIntoFL(vector<int> &arr)
{
    // your code here

    // Use push_front() method to push the elements in a forward list and return the
    // list
    forward_list<int> fl;
    for (auto n : arr)
        fl.push_front(n);
    return fl;
}