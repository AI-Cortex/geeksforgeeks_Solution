
// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Get smaller elements
// link : https://www.geeksforgeeks.org/problems/get-smaller-elements/1

public static ArrayList<Integer> getSmaller(int arr[], int target) {

    ArrayList<Integer> result = new ArrayList<>();

    for (int num : arr)
        if (num < target)
            result.add(num);

    return result;
}