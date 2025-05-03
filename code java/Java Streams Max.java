// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Java Streams Max
// link : https://www.geeksforgeeks.org/problems/java-streams-max/1

public static int maxUsingStreams(int[] arr) {
    // Your code here
    
    // Use stream().max().getAsInt()
    return Arrays.stream(arr).max().getAsInt();
}
