// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Rotate LinkedList By K
// link : https://www.geeksforgeeks.org/problems/rotate-linkedlist-by-k/1

public static void rotateByK(LinkedList<Integer> ll, int k) {
    // Your code here
    int n = ll.size();
    if (n == 0 || k % n == 0) return;

    k = k % n;

    for (int i = 0; i < k; i++) 
        ll.addFirst(ll.removeLast()); // You don't need to print
}
