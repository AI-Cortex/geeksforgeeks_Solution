// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Binary Search on ArrayList
// link : https://www.geeksforgeeks.org/problems/binary-search-on-arraylist/1

public static int binarySearchAL(ArrayList<Integer> list, int k) {
    int index = Collections.binarySearch(list, k);
    if (index >= 0)
        return index;
    else
        return -1;
        
}
