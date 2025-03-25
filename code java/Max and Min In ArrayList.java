
// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Max and Min In ArrayList
// link : https://www.geeksforgeeks.org/problems/max-and-min-in-arraylist/1

public static int maximumElement(ArrayList<Integer> arr) {
    int n = arr.get(0);
    for (int i = 1; i < arr.size(); i++)
        if (n < arr.get(i))
            n = arr.get(i);
    return n;
}

public static int minimumElement(ArrayList<Integer> arr) {
    int n = arr.get(0);
    for (int i = 1; i < arr.size(); i++)
        if (n > arr.get(i))
            n = arr.get(i);
    return n;
}