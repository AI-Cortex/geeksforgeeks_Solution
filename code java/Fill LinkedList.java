// my profile : https://Geeksforgeeks.com/profile/AI-Cortex
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Fill LinkedList
// link : https://www.geeksforgeeks.org/problems/fill-linkedlist/1

public static void fillLinkedList(LinkedList<Integer> ll, int k) {
    for (int i = 0; i < ll.size(); i++) {
        ll.set(i, k);
    }
}
