// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Forward List Erase After
// link : https://www.geeksforgeeks.org/problems/forward-list-erase-after/1

forward_list<int> eraseMe(forward_list<int> fwdlist)
{
    // Your code here
    fwdlist.erase_after(fwdlist.begin());
    // Use erase_after function
    return fwdlist;
}