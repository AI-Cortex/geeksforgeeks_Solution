// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution

//////////////////////////////////////////////////////////////////////
// name : PriorityQueue Inserion - 1
// link : https://www.geeksforgeeks.org/problems/priorityqueue-inserion/1

// User function Template for Java
class Solution {

    public static PriorityQueue<Integer> insertion(ArrayList<Integer> arr) {
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for (int num : arr) {
            pq.add(num);
        }

        return pq;

    }
}
